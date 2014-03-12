// ####ECOSHOSTGPLCOPYRIGHTBEGIN####                                        
// -------------------------------------------                              
// This file is part of the eCos host tools.                                
// Copyright (C) 1998, 1999, 2000 Free Software Foundation, Inc.            
//
// This program is free software; you can redistribute it and/or modify     
// it under the terms of the GNU General Public License as published by     
// the Free Software Foundation; either version 2 or (at your option) any   
// later version.                                                           
//
// This program is distributed in the hope that it will be useful, but      
// WITHOUT ANY WARRANTY; without even the implied warranty of               
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU        
// General Public License for more details.                                 
//
// You should have received a copy of the GNU General Public License        
// along with this program; if not, write to the                            
// Free Software Foundation, Inc., 51 Franklin Street,                      
// Fifth Floor, Boston, MA  02110-1301, USA.                                
// -------------------------------------------                              
// ####ECOSHOSTGPLCOPYRIGHTEND####                                          
#include "eCosStd.h"

Time Now()
{
#ifdef _WIN32
  __int64 ft;
  SYSTEMTIME st;
  GetSystemTime (&st);
  SystemTimeToFileTime(&st,(FILETIME *)&ft);
  return Time(ft)/10000;
#else // UNIX
  struct timeb tp;
  ftime(&tp);
  // A negative time would be bad news, but we're not in touble until 2038
  return 1000*Time(tp.time)+tp.millitm;
#endif
}

int MIN(int a, int b) { return a<b?a:b; } 
int MAX(int a, int b) { return a>b?a:b; }


