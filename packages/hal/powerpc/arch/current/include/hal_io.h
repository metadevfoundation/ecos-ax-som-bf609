#ifndef CYGONCE_HAL_IO_H
#define CYGONCE_HAL_IO_H

//=============================================================================
//
//      hal_io.h
//
//      HAL device IO register support.
//
//=============================================================================
// ####ECOSGPLCOPYRIGHTBEGIN####                                            
// -------------------------------------------                              
// This file is part of eCos, the Embedded Configurable Operating System.   
// Copyright (C) 1998, 1999, 2000, 2001, 2002, 2003, 2006 Free Software Foundation, Inc.
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
// Author(s):   nickg
// Contributors:        nickg
// Date:        1998-02-17
// Purpose:     Define IO register support
// Description: The macros defined here provide the HAL APIs for handling
//              device IO control registers.
//              
// Usage:
//              #include <cyg/hal/hal_io.h>
//              ...
//              
//
//####DESCRIPTIONEND####
//
//=============================================================================

#include <cyg/infra/cyg_type.h>
#ifdef CYGBLD_HAL_VAR_IO_H
#include CYGBLD_HAL_VAR_IO_H
#endif
#ifdef CYGBLD_HAL_PLF_IO_H
#include CYGBLD_HAL_PLF_IO_H
#endif

//-----------------------------------------------------------------------------
// Enforce in-order IO for all HAL reads/writes using this macro.
#ifndef HAL_IO_BARRIER_DEFINED
#define HAL_IO_BARRIER()                        \
    asm volatile ( "eieio" : : : "memory" )
#endif

// Force memory writes to be flushed using this macro. This also
// invalidates the pipeline, in case those writes affect the pipeline
// (as with some flash drivers).
#ifndef HAL_MEMORY_BARRIER_DEFINED
#define HAL_MEMORY_BARRIER() __asm__ volatile ("sync ; isync " : : : "memory")
#endif

//-----------------------------------------------------------------------------
// IO Register address.
// This type is for recording the address of an IO register.

typedef volatile CYG_ADDRWORD HAL_IO_REGISTER;

//-----------------------------------------------------------------------------
// BYTE Register access.
// Individual and vectorized access to 8 bit registers.

#define HAL_READ_UINT8( _register_, _value_ )           \
    CYG_MACRO_START                                     \
    ((_value_) = *((volatile CYG_BYTE *)(_register_))); \
    HAL_IO_BARRIER ();                                  \
    CYG_MACRO_END

#define HAL_WRITE_UINT8( _register_, _value_ )          \
    CYG_MACRO_START                                     \
    (*((volatile CYG_BYTE *)(_register_)) = (_value_)); \
    HAL_IO_BARRIER ();                                  \
    CYG_MACRO_END

#define HAL_READ_UINT8_VECTOR( _register_, _buf_, _count_, _step_ )     \
    CYG_MACRO_START                                                     \
    cyg_count32 _i_,_j_;                                                \
    for( _i_ = 0, _j_ = 0; _i_ < (_count_); _i_++, _j_ += (_step_)) {   \
        (_buf_)[_i_] = ((volatile CYG_BYTE *)(_register_))[_j_];        \
        HAL_IO_BARRIER ();                                              \
    }                                                                   \
    CYG_MACRO_END

#define HAL_WRITE_UINT8_VECTOR( _register_, _buf_, _count_, _step_ )    \
    CYG_MACRO_START                                                     \
    cyg_count32 _i_,_j_;                                                \
    for( _i_ = 0, _j_ = 0; _i_ < (_count_); _i_++, _j_ += (_step_)) {   \
        ((volatile CYG_BYTE *)(_register_))[_j_] = (_buf_)[_i_];        \
        HAL_IO_BARRIER ();                                              \
    }                                                                   \
    CYG_MACRO_END


//-----------------------------------------------------------------------------
// 16 bit access.
// Individual and vectorized access to 16 bit registers.
    
#define HAL_READ_UINT16( _register_, _value_ )                  \
    CYG_MACRO_START                                             \
    ((_value_) = *((volatile CYG_WORD16 *)(_register_)));       \
    HAL_IO_BARRIER ();                                          \
    CYG_MACRO_END

#define HAL_WRITE_UINT16( _register_, _value_ )                 \
    CYG_MACRO_START                                             \
    (*((volatile CYG_WORD16 *)(_register_)) = (_value_));       \
    HAL_IO_BARRIER ();                                          \
    CYG_MACRO_END

#define HAL_READ_UINT16_VECTOR( _register_, _buf_, _count_, _step_ )    \
    CYG_MACRO_START                                                     \
    cyg_count32 _i_,_j_;                                                \
    for( _i_ = 0, _j_ = 0; _i_ < (_count_); _i_++, _j_ += (_step_)) {   \
        (_buf_)[_i_] = ((volatile CYG_WORD16 *)(_register_))[_j_];      \
        HAL_IO_BARRIER ();                                              \
    }                                                                   \
    CYG_MACRO_END

#define HAL_WRITE_UINT16_VECTOR( _register_, _buf_, _count_, _step_ )   \
    CYG_MACRO_START                                                     \
    cyg_count32 _i_,_j_;                                                \
    for( _i_ = 0, _j_ = 0; _i_ < (_count_); _i_++, _j_ += (_step_)) {   \
        ((volatile CYG_WORD16 *)(_register_))[_j_] = (_buf_)[_i_];      \
        HAL_IO_BARRIER ();                                              \
    }                                                                   \
    CYG_MACRO_END

//-----------------------------------------------------------------------------
// 32 bit access.
// Individual and vectorized access to 32 bit registers.
    
#define HAL_READ_UINT32( _register_, _value_ )                  \
    CYG_MACRO_START                                             \
    ((_value_) = *((volatile CYG_WORD32 *)(_register_)));       \
    HAL_IO_BARRIER ();                                          \
    CYG_MACRO_END

#define HAL_WRITE_UINT32( _register_, _value_ )                 \
    CYG_MACRO_START                                             \
    (*((volatile CYG_WORD32 *)(_register_)) = (_value_));       \
    HAL_IO_BARRIER ();                                          \
    CYG_MACRO_END

#define HAL_READ_UINT32_VECTOR( _register_, _buf_, _count_, _step_ )    \
    CYG_MACRO_START                                                     \
    cyg_count32 _i_,_j_;                                                \
    for( _i_ = 0, _j_ = 0; _i_ < (_count_); _i_++, _j_ += (_step_)) {   \
        (_buf_)[_i_] = ((volatile CYG_WORD32 *)(_register_))[_j_];      \
        HAL_IO_BARRIER ();                                              \
    }                                                                   \
    CYG_MACRO_END

#define HAL_WRITE_UINT32_VECTOR( _register_, _buf_, _count_, _step_ )   \
    CYG_MACRO_START                                                     \
    cyg_count32 _i_,_j_;                                                \
    for( _i_ = 0, _j_ = 0; _i_ < (_count_); _i_++, _j_ += (_step_)) {   \
        ((volatile CYG_WORD32 *)(_register_))[_j_] = (_buf_)[_i_];      \
        HAL_IO_BARRIER ();                                              \
    }                                                                   \
    CYG_MACRO_END
    
//-----------------------------------------------------------------------------
#endif // ifndef CYGONCE_HAL_IO_H
// End of hal_io.h
