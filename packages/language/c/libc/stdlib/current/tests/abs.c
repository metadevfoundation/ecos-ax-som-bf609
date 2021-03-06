//=================================================================
//
//        abs.c
//
//        Testcase for C library abs()
//
//=================================================================
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
//=================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):     ctarpy, jlarmour
// Contributors:  
// Date:          2000-04-30
// Description:   Contains testcode for C library abs() function
//
//
//####DESCRIPTIONEND####

// INCLUDES
#include <pkgconf/system.h>
#include <stdlib.h>
#include <limits.h>
#include <cyg/infra/testcase.h>

// FUNCTIONS

#ifndef CYGPKG_LIBC_STARTUP
void cyg_user_start(void)
#else
int
main( int argc, char *argv[] )
#endif
{
    int x;

    CYG_TEST_INIT();

    CYG_TEST_INFO("Starting tests from testcase " __FILE__ " for C "
                  "library abs() function");

    // Check 1
    x = 5;
    CYG_TEST_PASS_FAIL( abs(x) == 5, "abs(5)");

    // Check 2
    x = -5;
    CYG_TEST_PASS_FAIL( abs(x) == 5, "abs(-5)");
    
    // Check 3
    x = 12345;
    CYG_TEST_PASS_FAIL( abs(x) == 12345, "abs(12345)");

    // Check 4
    x = -23456;
    CYG_TEST_PASS_FAIL( abs(x) == 23456, "abs(-23456");

    // Check 5
    x = 0;
    CYG_TEST_PASS_FAIL( abs(x) == 0, "abs(0)");

    // Check 6
    x = INT_MAX;
    CYG_TEST_PASS_FAIL( abs(x) == INT_MAX, "abs(INT_MAX)");

    // Check 7
    x = -INT_MAX;
    CYG_TEST_PASS_FAIL( abs(x) == INT_MAX, "abs(-INT_MAX)");

    CYG_TEST_FINISH("Finished tests from testcase " __FILE__ " for C "
                    "library abs() function");

} // main()

// EOF abs.c
