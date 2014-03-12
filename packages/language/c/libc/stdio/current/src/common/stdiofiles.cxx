//========================================================================
//
//      stdiofiles.cxx
//
//      ISO C library stdio central file data
//
//========================================================================
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
//========================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):     jlarmour
// Contributors:  
// Date:          2000-04-20
// Purpose:       Allocate storage for central file data object
// Description:   This file allocates the actual objects used by the
//                Cyg_libc_stdio_files class defined in
//                <cyg/libc/stdio/stdiofiles.hxx>
// Usage:       
//
//####DESCRIPTIONEND####
//
//=========================================================================

// CONFIGURATION

#include <pkgconf/libc_stdio.h>          // C library configuration

// INCLUDES

#include <stddef.h>                      // NULL
#include <cyg/libc/stdio/stream.hxx>     // Cyg_StdioStream
#include <cyg/libc/stdio/stdiofiles.hxx> // Class definition for
                                         // Cyg_libc_stdio_files

#ifdef CYGSEM_LIBC_STDIO_THREAD_SAFE_STREAMS
# include <cyg/infra/cyg_type.h>   // CYGBLD_ATTRIB_INIT_PRI
# include <cyg/kernel/mutex.hxx>   // mutexes
#endif


// GLOBAL VARIABLES

Cyg_StdioStream *Cyg_libc_stdio_files::files[FOPEN_MAX] = { NULL };

# ifdef CYGSEM_LIBC_STDIO_THREAD_SAFE_STREAMS
Cyg_Mutex Cyg_libc_stdio_files::files_lock 
    CYGBLD_ATTRIB_INIT_PRI(CYG_INIT_LIBC);
# endif

// EOF stdiofiles.cxx
