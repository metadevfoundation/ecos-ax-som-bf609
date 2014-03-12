#ifndef CYGONCE_LIBM_JN_H
#define CYGONCE_LIBM_JN_H
//===========================================================================
//
//      jnf.h
//
//      Test vectors for testing of jnf() math library function
//
//===========================================================================
// ####ECOSGPLCOPYRIGHTBEGIN####
// -------------------------------------------
// This file is part of eCos, the Embedded Configurable Operating System.
// Copyright (C) 2012 Free Software Foundation, Inc.
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
//===========================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):
// Contributors:  visar, ilijak
// Date:        1998-02-13
// Purpose:
// Description:
// Usage:       #include "vectors/jnf.h"
//
//####DESCRIPTIONEND####
//
//===========================================================================


// CONFIGURATION

#include <pkgconf/libm.h>   // Configuration header


// INCLUDES

#include <cyg/infra/cyg_type.h>    // Common type definitions and support
#include "vectors/vector_support_float.h"// extra support for math tests

#define JN_TOLERANCE 1.0E-04

static const Cyg_libm_test_float_vec_t jnf_vec[] = {

// AUTOMATICALLY GENERATED VECTORS START

/*{0, 0u, 0u, 1065353216u, 0, JN_TOLERANCE, 0},
{1, 1065353216u, 0u, 0u, 0, JN_TOLERANCE, 0},
{2, 1073741824u, 0u, 0u, 0, JN_TOLERANCE, 0},
{3, 1077936128u, 0u, 0u, 0, JN_TOLERANCE, 0},
{4, 1082130432u, 0u, 0u, 0, JN_TOLERANCE, 0},
{5, 0u, 1028443341u, 1065342732u, 0, JN_TOLERANCE, 0},
{6, 1065353216u, 1028443341u, 1020050539u, 0, JN_TOLERANCE, 0},
{7, 1073741824u, 1028443341u, 967036493u, 0, JN_TOLERANCE, 0},
{8, 1077936128u, 1028443341u, 909032513u, 0, JN_TOLERANCE, 0},
{9, 1082130432u, 1028443341u, 848022252u, 0, JN_TOLERANCE, 0},
{10, 0u, 1036831949u, 1065311299u, 0, JN_TOLERANCE, 0},*/
{11, 1065353216u, 1036831949u, 1028426571u, 0, JN_TOLERANCE, 0},
{12, 1073741824u, 1036831949u, 983807001u, 0, JN_TOLERANCE, 0},
{13, 1077936128u, 1036831949u, 934192970u, 0, JN_TOLERANCE, 0},
{14, 1082130432u, 1036831949u, 881573249u, 0, JN_TOLERANCE, 0},
{15, 0u, 1041865114u, 1065258977u, 0, JN_TOLERANCE, 0},
{16, 1065353216u, 1041865114u, 1033448221u, 0, JN_TOLERANCE, 0},
{17, 1073741824u, 1041865114u, 993524098u, 0, JN_TOLERANCE, 0},
{18, 1077936128u, 1041865114u, 949174191u, 0, JN_TOLERANCE, 0},
{19, 1082130432u, 1041865114u, 900775820u, 0, JN_TOLERANCE, 0},
{20, 0u, 1045220557u, 1065185863u, 0, JN_TOLERANCE, 0},
{21, 1065353216u, 1045220557u, 1036764952u, 0, JN_TOLERANCE, 0},
{22, 1073741824u, 1045220557u, 1000557416u, 0, JN_TOLERANCE, 0},
{23, 1077936128u, 1045220557u, 959337346u, 0, JN_TOLERANCE, 0},
{24, 1082130432u, 1045220557u, 915113951u, 0, JN_TOLERANCE, 0},
{25, 0u, 1048576000u, 1065092094u, 0, JN_TOLERANCE, 0},
{26, 1065353216u, 1048576000u, 1040056661u, 0, JN_TOLERANCE, 0},
{27, 1073741824u, 1048576000u, 1006545749u, 0, JN_TOLERANCE, 0},
{28, 1077936128u, 1048576000u, 967442500u, 0, JN_TOLERANCE, 0},
{29, 1082130432u, 1048576000u, 925508176u, 0, JN_TOLERANCE, 0},
{30, 0u, 1050253722u, 1064977847u, 0, JN_TOLERANCE, 0},
{31, 1065353216u, 1050253722u, 1041752291u, 0, JN_TOLERANCE, 0},
{32, 1073741824u, 1050253722u, 1010233605u, 0, JN_TOLERANCE, 0},
{33, 1077936128u, 1050253722u, 974299360u, 0, JN_TOLERANCE, 0},
{34, 1082130432u, 1050253722u, 934291206u, 0, JN_TOLERANCE, 0},
{35, 0u, 1051931443u, 1064843334u, 0, JN_TOLERANCE, 0},
{36, 1065353216u, 1051931443u, 1043363920u, 0, JN_TOLERANCE, 0},
{37, 1073741824u, 1051931443u, 1014518823u, 0, JN_TOLERANCE, 0},
{38, 1077936128u, 1051931443u, 979918350u, 0, JN_TOLERANCE, 0},
{39, 1082130432u, 1051931443u, 941811754u, 0, JN_TOLERANCE, 0},
{40, 0u, 1053609165u, 1064688808u, 0, JN_TOLERANCE, 0},
{41, 1065353216u, 1053609165u, 1044953905u, 0, JN_TOLERANCE, 0},
{42, 1073741824u, 1053609165u, 1017227927u, 0, JN_TOLERANCE, 0},
{43, 1077936128u, 1053609165u, 984417699u, 0, JN_TOLERANCE, 0},
{44, 1082130432u, 1053609165u, 948613636u, 0, JN_TOLERANCE, 0},
{45, 0u, 1055286886u, 1064514559u, 0, JN_TOLERANCE, 0},
{46, 1065353216u, 1055286886u, 1046519284u, 0, JN_TOLERANCE, 0},
{47, 1073741824u, 1055286886u, 1019994628u, 0, JN_TOLERANCE, 0},
{48, 1077936128u, 1055286886u, 989180633u, 0, JN_TOLERANCE, 0},
{49, 1082130432u, 1055286886u, 954052828u, 0, JN_TOLERANCE, 0},
{50, 0u, 1056964608u, 1064320911u, 0, JN_TOLERANCE, 0},
{51, 1065353216u, 1056964608u, 1048057145u, 0, JN_TOLERANCE, 0},
{52, 1073741824u, 1056964608u, 1023063370u, 0, JN_TOLERANCE, 0},
{53, 1077936128u, 1056964608u, 992478272u, 0, JN_TOLERANCE, 0},
{54, 1082130432u, 1056964608u, 958958431u, 0, JN_TOLERANCE, 0},
{55, 0u, 1057803469u, 1064108226u, 0, JN_TOLERANCE, 0},
{56, 1065353216u, 1057803469u, 1049070317u, 0, JN_TOLERANCE, 0},
{57, 1073741824u, 1057803469u, 1024918320u, 0, JN_TOLERANCE, 0},
{58, 1077936128u, 1057803469u, 996074782u, 0, JN_TOLERANCE, 0},
{59, 1082130432u, 1057803469u, 964042258u, 0, JN_TOLERANCE, 0},
{60, 0u, 1058642330u, 1063876903u, 0, JN_TOLERANCE, 0},
{61, 1065353216u, 1058642330u, 1049807481u, 0, JN_TOLERANCE, 0},
{62, 1073741824u, 1058642330u, 1026742828u, 0, JN_TOLERANCE, 0},
{63, 1077936128u, 1058642330u, 999303935u, 0, JN_TOLERANCE, 0},
{64, 1082130432u, 1058642330u, 967690547u, 0, JN_TOLERANCE, 0},
{65, 0u, 1059481190u, 1063627371u, 0, JN_TOLERANCE, 0},
{66, 1065353216u, 1059481190u, 1050526702u, 0, JN_TOLERANCE, 0},
{67, 1073741824u, 1059481190u, 1028705720u, 0, JN_TOLERANCE, 0},
{68, 1077936128u, 1059481190u, 1001821225u, 0, JN_TOLERANCE, 0},
{69, 1082130432u, 1059481190u, 971939318u, 0, JN_TOLERANCE, 0},
{70, 0u, 1060320051u, 1063360098u, 0, JN_TOLERANCE, 0},
{71, 1065353216u, 1060320051u, 1051226657u, 0, JN_TOLERANCE, 0},
{72, 1073741824u, 1060320051u, 1030802068u, 0, JN_TOLERANCE, 0},
{73, 1077936128u, 1060320051u, 1004737064u, 0, JN_TOLERANCE, 0},
{74, 1082130432u, 1060320051u, 975171307u, 0, JN_TOLERANCE, 0},
{75, 0u, 1061158912u, 1063075579u, 0, JN_TOLERANCE, 0},
{76, 1065353216u, 1061158912u, 1051906063u, 0, JN_TOLERANCE, 0},
{77, 1073741824u, 1061158912u, 1032412696u, 0, JN_TOLERANCE, 0},
{78, 1077936128u, 1061158912u, 1007354389u, 0, JN_TOLERANCE, 0},
{79, 1082130432u, 1061158912u, 978452199u, 0, JN_TOLERANCE, 0},
{80, 0u, 1061997773u, 1062774346u, 0, JN_TOLERANCE, 0},
{81, 1065353216u, 1061997773u, 1052563677u, 0, JN_TOLERANCE, 0},
{82, 1073741824u, 1061997773u, 1033586264u, 0, JN_TOLERANCE, 0},
{83, 1077936128u, 1061997773u, 1009246734u, 0, JN_TOLERANCE, 0},
{84, 1082130432u, 1061997773u, 981951802u, 0, JN_TOLERANCE, 0},
{85, 0u, 1062836634u, 1062456957u, 0, JN_TOLERANCE, 0},
{86, 1065353216u, 1062836634u, 1053198305u, 0, JN_TOLERANCE, 0},
{87, 1073741824u, 1062836634u, 1034818178u, 0, JN_TOLERANCE, 0},
{88, 1077936128u, 1062836634u, 1011372844u, 0, JN_TOLERANCE, 0},
{89, 1082130432u, 1062836634u, 984340071u, 0, JN_TOLERANCE, 0},
{90, 0u, 1063675494u, 1062124001u, 0, JN_TOLERANCE, 0},
{91, 1065353216u, 1063675494u, 1053808798u, 0, JN_TOLERANCE, 0},
{92, 1073741824u, 1063675494u, 1036105335u, 0, JN_TOLERANCE, 0},
{93, 1077936128u, 1063675494u, 1013742772u, 0, JN_TOLERANCE, 0},
{94, 1082130432u, 1063675494u, 987170764u, 0, JN_TOLERANCE, 0},
{95, 0u, 1064514355u, 1061776097u, 0, JN_TOLERANCE, 0},
{96, 1065353216u, 1064514355u, 1054394058u, 0, JN_TOLERANCE, 0},
{97, 1073741824u, 1064514355u, 1037444489u, 0, JN_TOLERANCE, 0},
{98, 1077936128u, 1064514355u, 1015693678u, 0, JN_TOLERANCE, 0},
{99, 1082130432u, 1064514355u, 990173788u, 0, JN_TOLERANCE, 0},
{100, 0u, 1065353216u, 1061413887u, 0, JN_TOLERANCE, 0},
{101, 1065353216u, 1065353216u, 1054953039u, 0, JN_TOLERANCE, 0},
{102, 1073741824u, 1065353216u, 1038832261u, 0, JN_TOLERANCE, 0},
{103, 1077936128u, 1065353216u, 1017135956u, 0, JN_TOLERANCE, 0},
{104, 1082130432u, 1065353216u, 992104219u, 0, JN_TOLERANCE, 0},
{105, 0u, 1065772646u, 1061038041u, 0, JN_TOLERANCE, 0},
{106, 1065353216u, 1065772646u, 1055484750u, 0, JN_TOLERANCE, 0},
{107, 1073741824u, 1065772646u, 1040226267u, 0, JN_TOLERANCE, 0},
{108, 1077936128u, 1065772646u, 1018712809u, 0, JN_TOLERANCE, 0},
{109, 1082130432u, 1065772646u, 994329897u, 0, JN_TOLERANCE, 0},
{110, 0u, 1066192077u, 1060649254u, 0, JN_TOLERANCE, 0},
{111, 1065353216u, 1066192077u, 1055988254u, 0, JN_TOLERANCE, 0},
{112, 1073741824u, 1066192077u, 1040963449u, 0, JN_TOLERANCE, 0},
{113, 1077936128u, 1066192077u, 1020427605u, 0, JN_TOLERANCE, 0},
{114, 1082130432u, 1066192077u, 996876707u, 0, JN_TOLERANCE, 0},
{115, 0u, 1066611507u, 1060248241u, 0, JN_TOLERANCE, 0},
{116, 1065353216u, 1066611507u, 1056462676u, 0, JN_TOLERANCE, 0},
{117, 1073741824u, 1066611507u, 1041719505u, 0, JN_TOLERANCE, 0},
{118, 1077936128u, 1066611507u, 1022283262u, 0, JN_TOLERANCE, 0},
{119, 1082130432u, 1066611507u, 999007660u, 0, JN_TOLERANCE, 0},
{120, 0u, 1067030938u, 1059835739u, 0, JN_TOLERANCE, 0},
{121, 1065353216u, 1067030938u, 1056907198u, 0, JN_TOLERANCE, 0},
{122, 1073741824u, 1067030938u, 1042492516u, 0, JN_TOLERANCE, 0},
{123, 1077936128u, 1067030938u, 1023846206u, 0, JN_TOLERANCE, 0},
{124, 1082130432u, 1067030938u, 1000641838u, 0, JN_TOLERANCE, 0},
{125, 0u, 1067450368u, 1059412506u, 0, JN_TOLERANCE, 0},
{126, 1065353216u, 1067450368u, 1057142837u, 0, JN_TOLERANCE, 0},
{127, 1073741824u, 1067450368u, 1043280515u, 0, JN_TOLERANCE, 0},
{128, 1077936128u, 1067450368u, 1024918343u, 0, JN_TOLERANCE, 0},
{129, 1082130432u, 1067450368u, 1002476495u, 0, JN_TOLERANCE, 0},
{130, 0u, 1067869798u, 1058979317u, 0, JN_TOLERANCE, 0},
{131, 1065353216u, 1067869798u, 1057334097u, 0, JN_TOLERANCE, 0},
{132, 1073741824u, 1067869798u, 1044081498u, 0, JN_TOLERANCE, 0},
{133, 1077936128u, 1067869798u, 1026063882u, 0, JN_TOLERANCE, 0},
{134, 1082130432u, 1067869798u, 1004525115u, 0, JN_TOLERANCE, 0},
{135, 0u, 1068289229u, 1058536963u, 0, JN_TOLERANCE, 0},
{136, 1065353216u, 1068289229u, 1057509369u, 0, JN_TOLERANCE, 0},
{137, 1073741824u, 1068289229u, 1044893419u, 0, JN_TOLERANCE, 0},
{138, 1077936128u, 1068289229u, 1027283330u, 0, JN_TOLERANCE, 0},
{139, 1082130432u, 1068289229u, 1006717070u, 0, JN_TOLERANCE, 0},
{140, 0u, 1068708659u, 1058086251u, 0, JN_TOLERANCE, 0},
{141, 1065353216u, 1068708659u, 1057668374u, 0, JN_TOLERANCE, 0},
{142, 1073741824u, 1068708659u, 1045714203u, 0, JN_TOLERANCE, 0},
{143, 1077936128u, 1068708659u, 1028576945u, 0, JN_TOLERANCE, 0},
{144, 1082130432u, 1068708659u, 1007975536u, 0, JN_TOLERANCE, 0},
{145, 0u, 1069128090u, 1057628001u, 0, JN_TOLERANCE, 0},
{146, 1065353216u, 1069128090u, 1057810862u, 0, JN_TOLERANCE, 0},
{147, 1073741824u, 1069128090u, 1046541746u, 0, JN_TOLERANCE, 0},
{148, 1077936128u, 1069128090u, 1029944734u, 0, JN_TOLERANCE, 0},
{149, 1082130432u, 1069128090u, 1009361087u, 0, JN_TOLERANCE, 0},
{150, 0u, 1069547520u, 1057163043u, 0, JN_TOLERANCE, 0},
{151, 1065353216u, 1069547520u, 1057936621u, 0, JN_TOLERANCE, 0},
{152, 1073741824u, 1069547520u, 1047373924u, 0, JN_TOLERANCE, 0},
{153, 1077936128u, 1069547520u, 1031386454u, 0, JN_TOLERANCE, 0},
{154, 1082130432u, 1069547520u, 1010880288u, 0, JN_TOLERANCE, 0},
{155, 0u, 1069966950u, 1056419833u, 0, JN_TOLERANCE, 0},
{156, 1065353216u, 1069966950u, 1058045471u, 0, JN_TOLERANCE, 0},
{157, 1073741824u, 1069966950u, 1048208593u, 0, JN_TOLERANCE, 0},
{158, 1077936128u, 1069966950u, 1032350194u, 0, JN_TOLERANCE, 0},
{159, 1082130432u, 1069966950u, 1012539586u, 0, JN_TOLERANCE, 0},
{160, 0u, 1070386381u, 1055468153u, 0, JN_TOLERANCE, 0},
{161, 1065353216u, 1070386381u, 1058137267u, 0, JN_TOLERANCE, 0},
{162, 1073741824u, 1070386381u, 1048809799u, 0, JN_TOLERANCE, 0},
{163, 1077936128u, 1070386381u, 1033144108u, 0, JN_TOLERANCE, 0},
{164, 1082130432u, 1070386381u, 1014345284u, 0, JN_TOLERANCE, 0},
{165, 0u, 1070805811u, 1054508151u, 0, JN_TOLERANCE, 0},
{166, 1065353216u, 1070805811u, 1058211899u, 0, JN_TOLERANCE, 0},
{167, 1073741824u, 1070805811u, 1049226388u, 0, JN_TOLERANCE, 0},
{168, 1077936128u, 1070805811u, 1033973855u, 0, JN_TOLERANCE, 0},
{169, 1082130432u, 1070805811u, 1015662539u, 0, JN_TOLERANCE, 0},
{170, 0u, 1071225242u, 1053541548u, 0, JN_TOLERANCE, 0},
{171, 1065353216u, 1071225242u, 1058269292u, 0, JN_TOLERANCE, 0},
{172, 1073741824u, 1071225242u, 1049640982u, 0, JN_TOLERANCE, 0},
{173, 1077936128u, 1071225242u, 1034838806u, 0, JN_TOLERANCE, 0},
{174, 1082130432u, 1071225242u, 1016720878u, 0, JN_TOLERANCE, 0},
{175, 0u, 1071644672u, 1052570069u, 0, JN_TOLERANCE, 0},
{176, 1065353216u, 1071644672u, 1058309406u, 0, JN_TOLERANCE, 0},
{177, 1073741824u, 1071644672u, 1050052500u, 0, JN_TOLERANCE, 0},
{178, 1077936128u, 1071644672u, 1035738201u, 0, JN_TOLERANCE, 0},
{179, 1082130432u, 1071644672u, 1017861291u, 0, JN_TOLERANCE, 0},
{180, 0u, 1072064102u, 1051595443u, 0, JN_TOLERANCE, 0},
{181, 1065353216u, 1072064102u, 1058332236u, 0, JN_TOLERANCE, 0},
{182, 1073741824u, 1072064102u, 1050459864u, 0, JN_TOLERANCE, 0},
{183, 1077936128u, 1072064102u, 1036671158u, 0, JN_TOLERANCE, 0},
{184, 1082130432u, 1072064102u, 1019086495u, 0, JN_TOLERANCE, 0},
{185, 0u, 1072483533u, 1050619397u, 0, JN_TOLERANCE, 0},
{186, 1065353216u, 1072483533u, 1058337811u, 0, JN_TOLERANCE, 0},
{187, 1073741824u, 1072483533u, 1050862006u, 0, JN_TOLERANCE, 0},
{188, 1077936128u, 1072483533u, 1037636670u, 0, JN_TOLERANCE, 0},
{189, 1082130432u, 1072483533u, 1020399064u, 0, JN_TOLERANCE, 0},
{190, 0u, 1072902963u, 1049643654u, 0, JN_TOLERANCE, 0},
{191, 1065353216u, 1072902963u, 1058326198u, 0, JN_TOLERANCE, 0},
{192, 1073741824u, 1072902963u, 1051257862u, 0, JN_TOLERANCE, 0},
{193, 1077936128u, 1072902963u, 1038633608u, 0, JN_TOLERANCE, 0},
{194, 1082130432u, 1072902963u, 1021801416u, 0, JN_TOLERANCE, 0},
{195, 0u, 1073322394u, 1048669927u, 0, JN_TOLERANCE, 0},
{196, 1065353216u, 1073322394u, 1058297495u, 0, JN_TOLERANCE, 0},
{197, 1073741824u, 1073322394u, 1051646385u, 0, JN_TOLERANCE, 0},
{198, 1077936128u, 1073322394u, 1039660722u, 0, JN_TOLERANCE, 0},
{199, 1082130432u, 1073322394u, 1023295797u, 0, JN_TOLERANCE, 0}

// AUTOMATICALLY GENERATED VECTORS STOP

};

#endif // CYGONCE_LIBM_JN_H multiple inclusion protection

// EOF jnf.h
