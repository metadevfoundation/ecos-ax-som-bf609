#ifndef CYGONCE_HAL_VARIANT_INC
#define CYGONCE_HAL_VARIANT_INC
##=============================================================================
##
##	variant.inc
##
##	MPC8xxx family assembler header file
##
##=============================================================================
## ####ECOSGPLCOPYRIGHTBEGIN####                                            
## -------------------------------------------                              
## This file is part of eCos, the Embedded Configurable Operating System.   
## Copyright (C) 1998, 1999, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.
##
## eCos is free software; you can redistribute it and/or modify it under    
## the terms of the GNU General Public License as published by the Free     
## Software Foundation; either version 2 or (at your option) any later      
## version.                                                                 
##
## eCos is distributed in the hope that it will be useful, but WITHOUT      
## ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or    
## FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License    
## for more details.                                                        
##
## You should have received a copy of the GNU General Public License        
## along with eCos; if not, write to the Free Software Foundation, Inc.,    
## 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.            
##
## As a special exception, if other files instantiate templates or use      
## macros or inline functions from this file, or you compile this file      
## and link it with other works to produce a work based on this file,       
## this file does not by itself cause the resulting work to be covered by   
## the GNU General Public License. However the source code for this file    
## must still be made available in accordance with section (3) of the GNU   
## General Public License v2.                                               
##
## This exception does not invalidate any other reasons why a work based    
## on this file might be covered by the GNU General Public License.         
## -------------------------------------------                              
## ####ECOSGPLCOPYRIGHTEND####                                              
##=============================================================================
#######DESCRIPTIONBEGIN####
##
## Author(s): 	pfine
## Contributors:jskov, gthomas
## Date:	2001-12-12
## Purpose:	MPC8260 family definitions.
## Description:	This file contains various definitions and macros that are
##              useful for writing assembly code for the MPC8260 CPU family.
## Usage:
##		#include <cyg/hal/variant.inc>
##		...
##		
##
######DESCRIPTIONEND####
##
##=============================================================================

#include <pkgconf/hal.h>
	
#include <cyg/hal/arch.inc>
#include <cyg/hal/plf_regs.h>   // For CYGARC_IMM_BASE

##-----------------------------------------------------------------------------
#ifndef SPRG0
#define SPRG0 272     # Counter Register
#endif
#ifndef SPRG1
#define SPRG1 273     # Counter Register
#endif
#ifndef SPRG2
#define SPRG2 274     # Counter Register
#endif
#ifndef SPRG3
#define SPRG3 275     # Counter Register
#endif

##-----------------------------------------------------------------------------
## MPC8260 defined vectors
	.macro mpc8260_vector name
        .p2align 8
        .globl  __exception_\name
__exception_\name:
   	#-------------------------------------------#
   	# save off registers used in vector routine #
   	#-------------------------------------------#

   	mtspr SPRG3,r3    # save r3
   	mfspr r3,8
   	mtspr SPRG2,r3    # save LR

   	#-----------------------------------------------------------------------
   	# Load the vector offset value in SPRG0 for handler shifted down 8 bits.
   	#----------------------------------------------------------------------- 

   	#addi  r3,r0,0x0010
   	addi  r3,r0,__exception_\name@l #load low 16 bits of exception vector
	srawi r3,r3,8                   #shift right by 8
   	mtspr SPRG0,r3

   	#---------------------------------------------------------
   	# load link register in order to jump to physical address
   	#---------------------------------------------------------

   	addis    r3,0,handler@h    
   	ori      r3,r3,handler@l
   	mtspr    8,r3 
   	bclr     20,0                 # jump unconditionally to address in Link 
        	                      # Register (LR)
	.endm

//
// This is for debugging purposes only
//
        .macro  infinite_loop_vector name
        .p2align 8
        .globl  __exception_\name
__exception_\name:
	mflr	r0
	lwi	r1,CYGARC_IMM_BASE
	lwi	r2,0x12345678
	stw	r0,0(r1)
	lwi	r3,__exception_\name
	stw	r3,4(r1)
	stw	r2,8(r1)
1:
	nop
	nop
	nop
	b 1b
        .endm

	.macro hal_reserved_vector_00000
	infinite_loop_vector	reserved
	.endm
#define CYG_HAL_RESERVED_VECTOR_00000
        
        .macro hal_extra_vectors
        infinite_loop_vector        itbl_miss
        infinite_loop_vector        dltlb_miss
        infinite_loop_vector        dstlb_miss
        infinite_loop_vector        iaddr_brkpt
        infinite_loop_vector        sys_mngmnt_intrpt
        .endm

##-----------------------------------------------------------------------------
## MPC8xxx CPU initialization
##
## Initialize CPU to a post-reset state, ensuring the ground doesn''t
## shift under us while we try to set things up.
        
        .macro hal_cpu_init
        # Set up MSR (disable MMU for now)
        lwi     r3,(CYG_MSR & ~(MSR_IR | MSR_DR))
        sync
        mtmsr   r3
        sync
        .endm

##-----------------------------------------------------------------------------
## MPC8xxx monitor initialization

#ifndef CYGPKG_HAL_PPC_MON_DEFINED

#if     defined(CYG_HAL_STARTUP_ROM) ||                 \
        defined(CYG_HAL_STARTUP_ROMRAM) ||                 \
        (       defined(CYG_HAL_STARTUP_RAM) &&         \
                !defined(CYGSEM_HAL_USE_ROM_MONITOR))

        .macro  hal_mon_init
#ifdef CYGSEM_HAL_POWERPC_COPY_VECTORS
        # If we are starting up from ROM and want vectors in RAM
        # or we are starting in RAM and NOT using a ROM monitor,
        # copy exception handler code to 0.
        lwi     r3,rom_vectors          # r3 = rom start
        lwi     r4,0                    # r4 = ram start
        lwi     r5,rom_vectors_end      # r5 = rom end
        cmplw   r3,r5                   # skip if no vectors
        beq     2f

        subi    r3,r3,4
        subi    r4,r4,4
        subi    r5,r5,4
1:
        lwzu    r0,4(r3)                # get word from ROM
        stwu    r0,4(r4)                # store in RAM
        cmplw   r3,r5                   # compare
        blt     1b                      # loop if not yet done
2:

        # Next initialize the VSR table. This happens whether the
        # vectors were copied to RAM or not.

        # First fill with exception handlers
        lwi     r3,cyg_hal_default_exception_vsr
        lwi     r4,hal_vsr_table
        subi    r4,r4,4
        li      r5,CYGNUM_HAL_VSR_COUNT
1:      stwu    r3,4(r4)
        subi    r5,r5,1
        cmpwi   r5,0
        bne     1b
#endif

        # Then fill in the special vectors
        lwi     r3,cyg_hal_default_interrupt_vsr
        lwi     r4,hal_vsr_table
        stw     r3,CYGNUM_HAL_VECTOR_INTERRUPT*4(r4)
        stw     r3,CYGNUM_HAL_VECTOR_DECREMENTER*4(r4)
        .endm

#elif defined(CYG_HAL_STARTUP_RAM) && defined(CYGSEM_HAL_USE_ROM_MONITOR)

        # Initialize the VSR table entries
        # We only take control of the interrupt vectors,
        # the rest are left to the ROM for now...

        .macro  hal_mon_init
        lwi     r3,cyg_hal_default_interrupt_vsr
        lwi     r4,hal_vsr_table
        stw     r3,CYGNUM_HAL_VECTOR_INTERRUPT*4(r4)
        stw     r3,CYGNUM_HAL_VECTOR_DECREMENTER*4(r4)
        .endm


#else

        .macro  hal_mon_init

        .endm

#endif


#define CYGPKG_HAL_PPC_MON_DEFINED

#endif // CYGPKG_HAL_PPC_MON_DEFINED

##-----------------------------------------------------------------------------
## MPC8xxx exception state handling
        .macro	hal_variant_save regs
        .endm

        .macro	hal_variant_load regs
        .endm

##-----------------------------------------------------------------------------
## Indicate that the ISR tables are defined in variant.S

#define CYG_HAL_PPC_ISR_TABLES_DEFINED

##-----------------------------------------------------------------------------
## MPC8260 interrupt handling.

#ifndef CYGPKG_HAL_POWERPC_INTC_DEFINED

## First level decoding of MPC8xxx SIU interrupt controller.

        # decode the interrupt
	.macro  hal_intc_decode dreg,state
        lwz     \dreg,CYGARC_PPCREG_VECTOR(\state) # retrieve vector number,
        rlwinm. \dreg,\dreg,22,31,31            # isolate bit 21
        beq     0f                              # done if decrementer (vec 0)
        lis     \dreg,(CYGARC_IMM_BASE+0x10000)>>16 # load register base
        lbz     \dreg,CYGARC_REG_IMM_SIVEC(\dreg)      # if external, get SIU vector
        srwi    \dreg,\dreg,2			# shift SIVEC value by 2
	//addi    \dreg,\dreg,1                   # Skip decrementer vector
0:      stw     \dreg,CYGARC_PPCREG_VECTOR(\state) # update vector in state frame.
        slwi    \dreg,\dreg,2                   # convert to byte offset.
        .endm                              


#define CYGPKG_HAL_POWERPC_INTC_DEFINED
#endif // CYGPKG_HAL_POWERPC_INTC_DEFINED
#------------------------------------------------------------------------------
#endif // ifndef CYGONCE_HAL_VARIANT_INC
# end of variant.inc
