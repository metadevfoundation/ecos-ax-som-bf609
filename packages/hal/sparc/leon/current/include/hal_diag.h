#ifndef CYGONCE_HAL_HAL_DIAG_H
#define CYGONCE_HAL_HAL_DIAG_H

/*=============================================================================
//
//      hal_diag.h
//
//      HAL Support for Kernel Diagnostic Routines
//
//=============================================================================
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
//=============================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):   hmt
// Contributors:        hmt
// Date:        1999-01-11
// Purpose:     HAL Support for Kernel Diagnostic Routines
// Description: Diagnostic routines for use during kernel development.
// Usage:       #include <cyg/hal/hal_diag.h>
//
//####DESCRIPTIONEND####
//
//===========================================================================*/

#include <pkgconf/hal.h>

#include <cyg/infra/cyg_type.h>

/*---------------------------------------------------------------------------*/

#define CYG_DIAG_USE_LEON

/*---------------------------------------------------------------------------*/

#ifdef  CYG_DIAG_USE_LEON

/*---------------------------------------------------------------------------*/
/* Register addresses                                                        */

#define SPARC_LEON_REG              (0x80000000)

/* These must be accessed word-wide to work! */
#define SPARC_LEON_UART_IO( x )      ((cyg_uint32)(x))

#define SPARC_LEON_UART_A_RX         ((volatile cyg_uint32 *)(SPARC_LEON_REG + 0x70))
#define SPARC_LEON_UART_A_TX         ((volatile cyg_uint32 *)(SPARC_LEON_REG + 0x70))
#define SPARC_LEON_UART_STATUS       ((volatile cyg_uint32 *)(SPARC_LEON_REG + 0x74))
#define SPARC_LEON_UART_RXAMASK      (0x00001)
#define SPARC_LEON_UART_TXAMASK      (0x00004)

  
/*---------------------------------------------------------------------------*/

#define HAL_DIAG_INIT()

#define HAL_DIAG_WRITE_CHAR(_c_)                                            \
{                                                                           \
    if( 1 || _c_ != '\r' )                                                  \
    {                                                                       \
        while( (SPARC_LEON_UART_TXAMASK & *SPARC_LEON_UART_STATUS) == 0 )     \
            continue;                                                       \
        *SPARC_LEON_UART_A_TX = SPARC_LEON_UART_IO(_c_);                      \
    }                                                                       \
}

#define HAL_DIAG_READ_CHAR(_c_)                                             \
{                                                                           \
    while( (SPARC_LEON_UART_RXAMASK & *SPARC_LEON_UART_STATUS) == 0 )         \
            continue;                                                       \
    _c_ = (char)*SPARC_LEON_UART_A_TX;                                       \
}

#define XHAL_DIAG_WRITE_CHAR(_c_)                                            \
{                                                                           \
    if( _c_ != '\r' )                                                       \
    {                                                                       \
        *SPARC_LEON_UART_A_TX = SPARC_LEON_UART_IO(_c_);                      \
    }                                                                       \
}

#define XHAL_DIAG_READ_CHAR(_c_)                                             \
{                                                                           \
    _c_ = (char)*SPARC_LEON_UART_A_TX;                                       \
}

#else
/*---------------------------------------------------------------------------*/
/* There is no diagnostic output on LEON processor                      */

#define HAL_DIAG_INIT()

#define HAL_DIAG_WRITE_CHAR(_c_)

#define HAL_DIAG_READ_CHAR(_c_) (_c_) = 0

#endif

/*---------------------------------------------------------------------------*/
/* end of hal_diag.h                                                         */
#endif /* CYGONCE_HAL_HAL_DIAG_H */
