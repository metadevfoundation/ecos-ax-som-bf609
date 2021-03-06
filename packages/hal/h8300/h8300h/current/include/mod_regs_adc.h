#ifndef CYGONCE_MOD_REGS_ADC_H
#define CYGONCE_MOD_REGS_ADC_H

//==========================================================================
//
//      mod_regs_adc.h
//
//      A/D D/A Converter Register
//
//==========================================================================
// ####ECOSGPLCOPYRIGHTBEGIN####                                            
// -------------------------------------------                              
// This file is part of eCos, the Embedded Configurable Operating System.   
// Copyright (C) 1998, 1999, 2000, 2001, 2002 Free Software Foundation, Inc.
//
// eCos is free software; you can redistribute it and/or modify it under    
// the terms of the GNU General Public License as published by the Free     
// Software Foundation; either version 2 or (at your option) any later      
// version.                                                                 
//
// eCos is distributed in the hope that it will be useful, but WITHOUT      
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or    
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License    
// for more details.                                                        
//
// You should have received a copy of the GNU General Public License        
// along with eCos; if not, write to the Free Software Foundation, Inc.,    
// 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.            
//
// As a special exception, if other files instantiate templates or use      
// macros or inline functions from this file, or you compile this file      
// and link it with other works to produce a work based on this file,       
// this file does not by itself cause the resulting work to be covered by   
// the GNU General Public License. However the source code for this file    
// must still be made available in accordance with section (3) of the GNU   
// General Public License v2.                                               
//
// This exception does not invalidate any other reasons why a work based    
// on this file might be covered by the GNU General Public License.         
// -------------------------------------------                              
// ####ECOSGPLCOPYRIGHTEND####                                              
//==========================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):    yoshinori sato
// Contributors: yoshinori sato
// Date:         2002-02-19
//              
//####DESCRIPTIONEND####
//
//==========================================================================

#define CYGARC_DASTCR 0xFEE01A
#define CYGARC_DADR0  0xFEE09C
#define CYGARC_DADR1  0xFEE09D
#define CYGARC_DACR   0xFEE09E

#define CYGARC_ADDRAH 0xFFFFE0
#define CYGARC_ADDRAL 0xFFFFE1
#define CYGARC_ADDRBH 0xFFFFE2
#define CYGARC_ADDRBL 0xFFFFE3
#define CYGARC_ADDRCH 0xFFFFE4
#define CYGARC_ADDRCL 0xFFFFE5
#define CYGARC_ADDRDH 0xFFFFE6
#define CYGARC_ADDRDL 0xFFFFE7
#define CYGARC_ADCSR  0xFFFFE8
#define CYGARC_ADCR   0xFFFFE9

#endif
