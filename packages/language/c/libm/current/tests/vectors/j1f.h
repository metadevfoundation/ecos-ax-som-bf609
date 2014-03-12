#ifndef CYGONCE_LIBM_J1_H
#define CYGONCE_LIBM_J1_H
//===========================================================================
//
//      j1f.h
//
//      Test vectors for testing of j1f() math library function
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
// Usage:       #include "vectors/j1f.h"
//
//####DESCRIPTIONEND####
//
//===========================================================================


// CONFIGURATION

#include <pkgconf/libm.h>   // Configuration header


// INCLUDES

#include <cyg/infra/cyg_type.h>    // Common type definitions and support
#include "vectors/vector_support_float.h"// extra support for math tests

#define J1_TOLERANCE 1.0E-04

static const Cyg_libm_test_float_vec_t j1f_vec[] = {

// AUTOMATICALLY GENERATED VECTORS START

{0, 3214514586u, 3204390847u, 3204390847u, 0, J1_TOLERANCE, 0},
{1, 3214430700u, 3204304372u, 3204304372u, 0, J1_TOLERANCE, 0},
{2, 3214346813u, 3204216675u, 3204216675u, 0, J1_TOLERANCE, 0},
{3, 3214262927u, 3204127764u, 3204127764u, 0, J1_TOLERANCE, 0},
{4, 3214179041u, 3204037646u, 3204037646u, 0, J1_TOLERANCE, 0},
{5, 3214095155u, 3203946324u, 3203946324u, 0, J1_TOLERANCE, 0},
{6, 3214011269u, 3203853807u, 3203853807u, 0, J1_TOLERANCE, 0},
{7, 3213927383u, 3203760099u, 3203760099u, 0, J1_TOLERANCE, 0},
{8, 3213843497u, 3203665208u, 3203665208u, 0, J1_TOLERANCE, 0},
{9, 3213759611u, 3203569140u, 3203569140u, 0, J1_TOLERANCE, 0},
{10, 3213675725u, 3203471902u, 3203471902u, 0, J1_TOLERANCE, 0},
{11, 3213591839u, 3203373501u, 3203373501u, 0, J1_TOLERANCE, 0},
{12, 3213507953u, 3203273943u, 3203273943u, 0, J1_TOLERANCE, 0},
{13, 3213424067u, 3203173236u, 3203173236u, 0, J1_TOLERANCE, 0},
{14, 3213340180u, 3203071384u, 3203071384u, 0, J1_TOLERANCE, 0},
{15, 3213256294u, 3202968397u, 3202968397u, 0, J1_TOLERANCE, 0},
{16, 3213172408u, 3202864283u, 3202864283u, 0, J1_TOLERANCE, 0},
{17, 3213088522u, 3202759048u, 3202759048u, 0, J1_TOLERANCE, 0},
{18, 3213004636u, 3202652698u, 3202652698u, 0, J1_TOLERANCE, 0},
{19, 3212920750u, 3202545242u, 3202545242u, 0, J1_TOLERANCE, 0},
{20, 3212836864u, 3202436688u, 3202436688u, 0, J1_TOLERANCE, 0},
{21, 3212669092u, 3202327042u, 3202327042u, 0, J1_TOLERANCE, 0},
{22, 3212501320u, 3202216313u, 3202216313u, 0, J1_TOLERANCE, 0},
{23, 3212333548u, 3202104510u, 3202104510u, 0, J1_TOLERANCE, 0},
{24, 3212165775u, 3201991637u, 3201991637u, 0, J1_TOLERANCE, 0},
{25, 3211998003u, 3201877707u, 3201877707u, 0, J1_TOLERANCE, 0},
{26, 3211830231u, 3201762724u, 3201762724u, 0, J1_TOLERANCE, 0},
{27, 3211662459u, 3201646699u, 3201646699u, 0, J1_TOLERANCE, 0},
{28, 3211494687u, 3201529639u, 3201529639u, 0, J1_TOLERANCE, 0},
{29, 3211326915u, 3201411552u, 3201411552u, 0, J1_TOLERANCE, 0},
{30, 3211159142u, 3201292447u, 3201292447u, 0, J1_TOLERANCE, 0},
{31, 3210991370u, 3201172332u, 3201172332u, 0, J1_TOLERANCE, 0},
{32, 3210823598u, 3201051217u, 3201051217u, 0, J1_TOLERANCE, 0},
{33, 3210655826u, 3200929110u, 3200929110u, 0, J1_TOLERANCE, 0},
{34, 3210488054u, 3200806018u, 3200806018u, 0, J1_TOLERANCE, 0},
{35, 3210320282u, 3200681954u, 3200681954u, 0, J1_TOLERANCE, 0},
{36, 3210152509u, 3200556922u, 3200556922u, 0, J1_TOLERANCE, 0},
{37, 3209984737u, 3200430935u, 3200430935u, 0, J1_TOLERANCE, 0},
{38, 3209816965u, 3200304001u, 3200304001u, 0, J1_TOLERANCE, 0},
{39, 3209649193u, 3200176127u, 3200176127u, 0, J1_TOLERANCE, 0},
{40, 3209481421u, 3200047325u, 3200047325u, 0, J1_TOLERANCE, 0},
{41, 3209313649u, 3199917604u, 3199917604u, 0, J1_TOLERANCE, 0},
{42, 3209145876u, 3199786971u, 3199786971u, 0, J1_TOLERANCE, 0},
{43, 3208978104u, 3199655439u, 3199655439u, 0, J1_TOLERANCE, 0},
{44, 3208810332u, 3199523016u, 3199523016u, 0, J1_TOLERANCE, 0},
{45, 3208642560u, 3199389711u, 3199389711u, 0, J1_TOLERANCE, 0},
{46, 3208474788u, 3199255534u, 3199255534u, 0, J1_TOLERANCE, 0},
{47, 3208307016u, 3199120495u, 3199120495u, 0, J1_TOLERANCE, 0},
{48, 3208139244u, 3198984604u, 3198984604u, 0, J1_TOLERANCE, 0},
{49, 3207971471u, 3198847871u, 3198847871u, 0, J1_TOLERANCE, 0},
{50, 3207803699u, 3198710305u, 3198710305u, 0, J1_TOLERANCE, 0},
{51, 3207635927u, 3198571918u, 3198571918u, 0, J1_TOLERANCE, 0},
{52, 3207468155u, 3198432718u, 3198432718u, 0, J1_TOLERANCE, 0},
{53, 3207300383u, 3198292717u, 3198292717u, 0, J1_TOLERANCE, 0},
{54, 3207132611u, 3198151925u, 3198151925u, 0, J1_TOLERANCE, 0},
{55, 3206964838u, 3198010350u, 3198010350u, 0, J1_TOLERANCE, 0},
{56, 3206797066u, 3197868004u, 3197868004u, 0, J1_TOLERANCE, 0},
{57, 3206629294u, 3197724900u, 3197724900u, 0, J1_TOLERANCE, 0},
{58, 3206461522u, 3197581046u, 3197581046u, 0, J1_TOLERANCE, 0},
{59, 3206293750u, 3197436451u, 3197436451u, 0, J1_TOLERANCE, 0},
{60, 3206125978u, 3197291130u, 3197291130u, 0, J1_TOLERANCE, 0},
{61, 3205958205u, 3197145088u, 3197145088u, 0, J1_TOLERANCE, 0},
{62, 3205790433u, 3196998341u, 3196998341u, 0, J1_TOLERANCE, 0},
{63, 3205622661u, 3196850897u, 3196850897u, 0, J1_TOLERANCE, 0},
{64, 3205454889u, 3196702768u, 3196702768u, 0, J1_TOLERANCE, 0},
{65, 3205287117u, 3196553966u, 3196553966u, 0, J1_TOLERANCE, 0},
{66, 3205119345u, 3196404499u, 3196404499u, 0, J1_TOLERANCE, 0},
{67, 3204951572u, 3196254379u, 3196254379u, 0, J1_TOLERANCE, 0},
{68, 3204783800u, 3196103619u, 3196103619u, 0, J1_TOLERANCE, 0},
{69, 3204616028u, 3195844811u, 3195844811u, 0, J1_TOLERANCE, 0},
{70, 3204448256u, 3195540793u, 3195540793u, 0, J1_TOLERANCE, 0},
{71, 3204112712u, 3195235560u, 3195235560u, 0, J1_TOLERANCE, 0},
{72, 3203777167u, 3194929135u, 3194929135u, 0, J1_TOLERANCE, 0},
{73, 3203441623u, 3194621539u, 3194621539u, 0, J1_TOLERANCE, 0},
{74, 3203106079u, 3194312798u, 3194312798u, 0, J1_TOLERANCE, 0},
{75, 3202770534u, 3194002931u, 3194002931u, 0, J1_TOLERANCE, 0},
{76, 3202434990u, 3193691965u, 3193691965u, 0, J1_TOLERANCE, 0},
{77, 3202099446u, 3193379921u, 3193379921u, 0, J1_TOLERANCE, 0},
{78, 3201763901u, 3193066821u, 3193066821u, 0, J1_TOLERANCE, 0},
{79, 3201428357u, 3192752691u, 3192752691u, 0, J1_TOLERANCE, 0},
{80, 3201092813u, 3192437553u, 3192437553u, 0, J1_TOLERANCE, 0},
{81, 3200757268u, 3192121430u, 3192121430u, 0, J1_TOLERANCE, 0},
{82, 3200421724u, 3191804346u, 3191804346u, 0, J1_TOLERANCE, 0},
{83, 3200086180u, 3191486326u, 3191486326u, 0, J1_TOLERANCE, 0},
{84, 3199750636u, 3191167393u, 3191167393u, 0, J1_TOLERANCE, 0},
{85, 3199415091u, 3190847568u, 3190847568u, 0, J1_TOLERANCE, 0},
{86, 3199079547u, 3190526878u, 3190526878u, 0, J1_TOLERANCE, 0},
{87, 3198744003u, 3190205347u, 3190205347u, 0, J1_TOLERANCE, 0},
{88, 3198408458u, 3189882997u, 3189882997u, 0, J1_TOLERANCE, 0},
{89, 3198072914u, 3189559853u, 3189559853u, 0, J1_TOLERANCE, 0},
{90, 3197737370u, 3189235939u, 3189235939u, 0, J1_TOLERANCE, 0},
{91, 3197401825u, 3188911280u, 3188911280u, 0, J1_TOLERANCE, 0},
{92, 3197066281u, 3188585899u, 3188585899u, 0, J1_TOLERANCE, 0},
{93, 3196730737u, 3188259823u, 3188259823u, 0, J1_TOLERANCE, 0},
{94, 3196395192u, 3187933072u, 3187933072u, 0, J1_TOLERANCE, 0},
{95, 3196059648u, 3187540310u, 3187540310u, 0, J1_TOLERANCE, 0},
{96, 3195388559u, 3186884265u, 3186884265u, 0, J1_TOLERANCE, 0},
{97, 3194717471u, 3186227024u, 3186227024u, 0, J1_TOLERANCE, 0},
{98, 3194046382u, 3185568632u, 3185568632u, 0, J1_TOLERANCE, 0},
{99, 3193375293u, 3184909141u, 3184909141u, 0, J1_TOLERANCE, 0},
{100, 3192704205u, 3184248599u, 3184248599u, 0, J1_TOLERANCE, 0},
{101, 3192033116u, 3183587058u, 3183587058u, 0, J1_TOLERANCE, 0},
{102, 3191362028u, 3182924563u, 3182924563u, 0, J1_TOLERANCE, 0},
{103, 3190690939u, 3182261167u, 3182261167u, 0, J1_TOLERANCE, 0},
{104, 3190019850u, 3181596918u, 3181596918u, 0, J1_TOLERANCE, 0},
{105, 3189348762u, 3180931869u, 3180931869u, 0, J1_TOLERANCE, 0},
{106, 3188677673u, 3180266065u, 3180266065u, 0, J1_TOLERANCE, 0},
{107, 3188006584u, 3179599559u, 3179599559u, 0, J1_TOLERANCE, 0},
{108, 3186999951u, 3178582370u, 3178582370u, 0, J1_TOLERANCE, 0},
{109, 3185657774u, 3177246847u, 3177246847u, 0, J1_TOLERANCE, 0},
{110, 3184315597u, 3175910219u, 3175910219u, 0, J1_TOLERANCE, 0},
{111, 3182973420u, 3174572585u, 3174572585u, 0, J1_TOLERANCE, 0},
{112, 3181631242u, 3173234046u, 3173234046u, 0, J1_TOLERANCE, 0},
{113, 3180289065u, 3171894704u, 3171894704u, 0, J1_TOLERANCE, 0},
{114, 3178611343u, 3170215488u, 3170215488u, 0, J1_TOLERANCE, 0},
{115, 3175926989u, 3167534188u, 3167534188u, 0, J1_TOLERANCE, 0},
{116, 3173242634u, 3164851878u, 3164851878u, 0, J1_TOLERANCE, 0},
{117, 3170222735u, 3161832315u, 3161832315u, 0, J1_TOLERANCE, 0},
{118, 3164854026u, 3156464881u, 3156464881u, 0, J1_TOLERANCE, 0},
{119, 3156465418u, 3148076676u, 3148076676u, 0, J1_TOLERANCE, 0},
{120, 1008981770u, 1000593028u, 1000593028u, 0, J1_TOLERANCE, 0},
{121, 1017370378u, 1008981233u, 1008981233u, 0, J1_TOLERANCE, 0},
{122, 1022739087u, 1014348667u, 1014348667u, 0, J1_TOLERANCE, 0},
{123, 1025758986u, 1017368230u, 1017368230u, 0, J1_TOLERANCE, 0},
{124, 1028443341u, 1020050540u, 1020050540u, 0, J1_TOLERANCE, 0},
{125, 1031127695u, 1022731840u, 1022731840u, 0, J1_TOLERANCE, 0},
{126, 1032805417u, 1024411056u, 1024411056u, 0, J1_TOLERANCE, 0},
{127, 1034147594u, 1025750398u, 1025750398u, 0, J1_TOLERANCE, 0},
{128, 1035489772u, 1027088937u, 1027088937u, 0, J1_TOLERANCE, 0},
{129, 1036831949u, 1028426571u, 1028426571u, 0, J1_TOLERANCE, 0},
{130, 1038174126u, 1029763199u, 1029763199u, 0, J1_TOLERANCE, 0},
{131, 1039516303u, 1031098722u, 1031098722u, 0, J1_TOLERANCE, 0},
{132, 1040522936u, 1032115911u, 1032115911u, 0, J1_TOLERANCE, 0},
{133, 1041194025u, 1032782417u, 1032782417u, 0, J1_TOLERANCE, 0},
{134, 1041865114u, 1033448221u, 1033448221u, 0, J1_TOLERANCE, 0},
{135, 1042536202u, 1034113270u, 1034113270u, 0, J1_TOLERANCE, 0},
{136, 1043207291u, 1034777519u, 1034777519u, 0, J1_TOLERANCE, 0},
{137, 1043878380u, 1035440915u, 1035440915u, 0, J1_TOLERANCE, 0},
{138, 1044549468u, 1036103410u, 1036103410u, 0, J1_TOLERANCE, 0},
{139, 1045220557u, 1036764951u, 1036764951u, 0, J1_TOLERANCE, 0},
{140, 1045891645u, 1037425493u, 1037425493u, 0, J1_TOLERANCE, 0},
{141, 1046562734u, 1038084984u, 1038084984u, 0, J1_TOLERANCE, 0},
{142, 1047233823u, 1038743376u, 1038743376u, 0, J1_TOLERANCE, 0},
{143, 1047904911u, 1039400617u, 1039400617u, 0, J1_TOLERANCE, 0},
{144, 1048576000u, 1040056662u, 1040056662u, 0, J1_TOLERANCE, 0},
{145, 1048911544u, 1040449424u, 1040449424u, 0, J1_TOLERANCE, 0},
{146, 1049247089u, 1040776175u, 1040776175u, 0, J1_TOLERANCE, 0},
{147, 1049582633u, 1041102251u, 1041102251u, 0, J1_TOLERANCE, 0},
{148, 1049918177u, 1041427632u, 1041427632u, 0, J1_TOLERANCE, 0},
{149, 1050253722u, 1041752291u, 1041752291u, 0, J1_TOLERANCE, 0},
{150, 1050589266u, 1042076205u, 1042076205u, 0, J1_TOLERANCE, 0},
{151, 1050924810u, 1042399349u, 1042399349u, 0, J1_TOLERANCE, 0},
{152, 1051260355u, 1042721699u, 1042721699u, 0, J1_TOLERANCE, 0},
{153, 1051595899u, 1043043230u, 1043043230u, 0, J1_TOLERANCE, 0},
{154, 1051931443u, 1043363920u, 1043363920u, 0, J1_TOLERANCE, 0},
{155, 1052266988u, 1043683745u, 1043683745u, 0, J1_TOLERANCE, 0},
{156, 1052602532u, 1044002678u, 1044002678u, 0, J1_TOLERANCE, 0},
{157, 1052938076u, 1044320698u, 1044320698u, 0, J1_TOLERANCE, 0},
{158, 1053273620u, 1044637782u, 1044637782u, 0, J1_TOLERANCE, 0},
{159, 1053609165u, 1044953905u, 1044953905u, 0, J1_TOLERANCE, 0},
{160, 1053944709u, 1045269043u, 1045269043u, 0, J1_TOLERANCE, 0},
{161, 1054280253u, 1045583173u, 1045583173u, 0, J1_TOLERANCE, 0},
{162, 1054615798u, 1045896273u, 1045896273u, 0, J1_TOLERANCE, 0},
{163, 1054951342u, 1046208317u, 1046208317u, 0, J1_TOLERANCE, 0},
{164, 1055286886u, 1046519283u, 1046519283u, 0, J1_TOLERANCE, 0},
{165, 1055622431u, 1046829150u, 1046829150u, 0, J1_TOLERANCE, 0},
{166, 1055957975u, 1047137891u, 1047137891u, 0, J1_TOLERANCE, 0},
{167, 1056293519u, 1047445487u, 1047445487u, 0, J1_TOLERANCE, 0},
{168, 1056629064u, 1047751912u, 1047751912u, 0, J1_TOLERANCE, 0},
{169, 1056964608u, 1048057145u, 1048057145u, 0, J1_TOLERANCE, 0},
{170, 1057132380u, 1048361163u, 1048361163u, 0, J1_TOLERANCE, 0},
{171, 1057300152u, 1048619971u, 1048619971u, 0, J1_TOLERANCE, 0},
{172, 1057467924u, 1048770731u, 1048770731u, 0, J1_TOLERANCE, 0},
{173, 1057635697u, 1048920851u, 1048920851u, 0, J1_TOLERANCE, 0},
{174, 1057803469u, 1049070318u, 1049070318u, 0, J1_TOLERANCE, 0},
{175, 1057971241u, 1049219120u, 1049219120u, 0, J1_TOLERANCE, 0},
{176, 1058139013u, 1049367249u, 1049367249u, 0, J1_TOLERANCE, 0},
{177, 1058306785u, 1049514693u, 1049514693u, 0, J1_TOLERANCE, 0},
{178, 1058474557u, 1049661440u, 1049661440u, 0, J1_TOLERANCE, 0},
{179, 1058642330u, 1049807482u, 1049807482u, 0, J1_TOLERANCE, 0},
{180, 1058810102u, 1049952803u, 1049952803u, 0, J1_TOLERANCE, 0},
{181, 1058977874u, 1050097398u, 1050097398u, 0, J1_TOLERANCE, 0},
{182, 1059145646u, 1050241252u, 1050241252u, 0, J1_TOLERANCE, 0},
{183, 1059313418u, 1050384356u, 1050384356u, 0, J1_TOLERANCE, 0},
{184, 1059481190u, 1050526702u, 1050526702u, 0, J1_TOLERANCE, 0},
{185, 1059648963u, 1050668277u, 1050668277u, 0, J1_TOLERANCE, 0},
{186, 1059816735u, 1050809069u, 1050809069u, 0, J1_TOLERANCE, 0},
{187, 1059984507u, 1050949070u, 1050949070u, 0, J1_TOLERANCE, 0},
{188, 1060152279u, 1051088270u, 1051088270u, 0, J1_TOLERANCE, 0},
{189, 1060320051u, 1051226657u, 1051226657u, 0, J1_TOLERANCE, 0},
{190, 1060487823u, 1051364223u, 1051364223u, 0, J1_TOLERANCE, 0},
{191, 1060655596u, 1051500956u, 1051500956u, 0, J1_TOLERANCE, 0},
{192, 1060823368u, 1051636847u, 1051636847u, 0, J1_TOLERANCE, 0},
{193, 1060991140u, 1051771886u, 1051771886u, 0, J1_TOLERANCE, 0},
{194, 1061158912u, 1051906063u, 1051906063u, 0, J1_TOLERANCE, 0},
{195, 1061326684u, 1052039368u, 1052039368u, 0, J1_TOLERANCE, 0},
{196, 1061494456u, 1052171791u, 1052171791u, 0, J1_TOLERANCE, 0},
{197, 1061662228u, 1052303323u, 1052303323u, 0, J1_TOLERANCE, 0},
{198, 1061830001u, 1052433956u, 1052433956u, 0, J1_TOLERANCE, 0},
{199, 1061997773u, 1052563677u, 1052563677u, 0, J1_TOLERANCE, 0},
{200, 1062165545u, 1052692479u, 1052692479u, 0, J1_TOLERANCE, 0},
{201, 1062333317u, 1052820353u, 1052820353u, 0, J1_TOLERANCE, 0},
{202, 1062501089u, 1052947287u, 1052947287u, 0, J1_TOLERANCE, 0},
{203, 1062668861u, 1053073274u, 1053073274u, 0, J1_TOLERANCE, 0},
{204, 1062836634u, 1053198306u, 1053198306u, 0, J1_TOLERANCE, 0},
{205, 1063004406u, 1053322370u, 1053322370u, 0, J1_TOLERANCE, 0},
{206, 1063172178u, 1053445462u, 1053445462u, 0, J1_TOLERANCE, 0},
{207, 1063339950u, 1053567569u, 1053567569u, 0, J1_TOLERANCE, 0},
{208, 1063507722u, 1053688684u, 1053688684u, 0, J1_TOLERANCE, 0},
{209, 1063675494u, 1053808799u, 1053808799u, 0, J1_TOLERANCE, 0},
{210, 1063843267u, 1053927904u, 1053927904u, 0, J1_TOLERANCE, 0},
{211, 1064011039u, 1054045991u, 1054045991u, 0, J1_TOLERANCE, 0},
{212, 1064178811u, 1054163051u, 1054163051u, 0, J1_TOLERANCE, 0},
{213, 1064346583u, 1054279076u, 1054279076u, 0, J1_TOLERANCE, 0},
{214, 1064514355u, 1054394059u, 1054394059u, 0, J1_TOLERANCE, 0},
{215, 1064682127u, 1054507989u, 1054507989u, 0, J1_TOLERANCE, 0},
{216, 1064849900u, 1054620862u, 1054620862u, 0, J1_TOLERANCE, 0},
{217, 1065017672u, 1054732665u, 1054732665u, 0, J1_TOLERANCE, 0},
{218, 1065185444u, 1054843394u, 1054843394u, 0, J1_TOLERANCE, 0},
{219, 1065353216u, 1054953040u, 1054953040u, 0, J1_TOLERANCE, 0},
{220, 1065437102u, 1055061594u, 1055061594u, 0, J1_TOLERANCE, 0},
{221, 1065520988u, 1055169050u, 1055169050u, 0, J1_TOLERANCE, 0},
{222, 1065604874u, 1055275400u, 1055275400u, 0, J1_TOLERANCE, 0},
{223, 1065688760u, 1055380635u, 1055380635u, 0, J1_TOLERANCE, 0},
{224, 1065772646u, 1055484749u, 1055484749u, 0, J1_TOLERANCE, 0},
{225, 1065856532u, 1055587736u, 1055587736u, 0, J1_TOLERANCE, 0},
{226, 1065940419u, 1055689588u, 1055689588u, 0, J1_TOLERANCE, 0},
{227, 1066024305u, 1055790295u, 1055790295u, 0, J1_TOLERANCE, 0},
{228, 1066108191u, 1055889853u, 1055889853u, 0, J1_TOLERANCE, 0},
{229, 1066192077u, 1055988254u, 1055988254u, 0, J1_TOLERANCE, 0},
{230, 1066275963u, 1056085492u, 1056085492u, 0, J1_TOLERANCE, 0},
{231, 1066359849u, 1056181560u, 1056181560u, 0, J1_TOLERANCE, 0},
{232, 1066443735u, 1056276451u, 1056276451u, 0, J1_TOLERANCE, 0},
{233, 1066527621u, 1056370159u, 1056370159u, 0, J1_TOLERANCE, 0},
{234, 1066611507u, 1056462676u, 1056462676u, 0, J1_TOLERANCE, 0},
{235, 1066695393u, 1056553998u, 1056553998u, 0, J1_TOLERANCE, 0},
{236, 1066779279u, 1056644116u, 1056644116u, 0, J1_TOLERANCE, 0},
{237, 1066863165u, 1056733027u, 1056733027u, 0, J1_TOLERANCE, 0},
{238, 1066947052u, 1056820724u, 1056820724u, 0, J1_TOLERANCE, 0},
{239, 3234402267u, 1046051504u, 1046051504u, 0, J1_TOLERANCE, 0},
{240, 3231108068u, 1049638262u, 1049638262u, 0, J1_TOLERANCE, 0},
{241, 3226013659u, 3197221145u, 3197221145u, 0, J1_TOLERANCE, 0},
{242, 3217625051u, 3205569378u, 3205569378u, 0, J1_TOLERANCE, 0},
{243, 0u, 0u, 0u, 0, J1_TOLERANCE, 0},
{244, 1070141403u, 1058085730u, 1058085730u, 0, J1_TOLERANCE, 0},
{245, 1078530011u, 1049737497u, 1049737497u, 0, J1_TOLERANCE, 0},
{246, 1083624420u, 3197121910u, 3197121910u, 0, J1_TOLERANCE, 0},
{247, 3253731328u, 1039348685u, 1039348685u, 0, J1_TOLERANCE, 0},
{248, 3252840038u, 3184567008u, 3184567008u, 0, J1_TOLERANCE, 0},
{249, 3251948749u, 3184209412u, 3184209412u, 0, J1_TOLERANCE, 0},
{250, 3251057459u, 1040848794u, 1040848794u, 0, J1_TOLERANCE, 0},
{251, 3250166170u, 1032875620u, 1032875620u, 0, J1_TOLERANCE, 0},
{252, 3249274880u, 3190278356u, 3190278356u, 0, J1_TOLERANCE, 0},
{253, 3248383590u, 3171314413u, 3171314413u, 0, J1_TOLERANCE, 0},
{254, 3247492301u, 1044371641u, 1044371641u, 0, J1_TOLERANCE, 0},
{255, 3246601011u, 3160647523u, 3160647523u, 0, J1_TOLERANCE, 0},
{256, 3245028147u, 3192989500u, 3192989500u, 0, J1_TOLERANCE, 0},
{257, 3243245568u, 1032848118u, 1032848118u, 0, J1_TOLERANCE, 0},
{258, 3241462989u, 1046177193u, 1046177193u, 0, J1_TOLERANCE, 0},
{259, 3239680410u, 3188645785u, 3188645785u, 0, J1_TOLERANCE, 0},
{260, 3237792973u, 3193991324u, 3193991324u, 0, J1_TOLERANCE, 0},
{261, 3234227814u, 1047429570u, 1047429570u, 0, J1_TOLERANCE, 0},
{262, 3230662656u, 1047304985u, 1047304985u, 0, J1_TOLERANCE, 0},
{263, 3224580915u, 3201418603u, 3201418603u, 0, J1_TOLERANCE, 0},
{264, 3213675725u, 3203471902u, 3203471902u, 0, J1_TOLERANCE, 0},
{265, 1058642330u, 1049807482u, 1049807482u, 0, J1_TOLERANCE, 0},
{266, 1075000115u, 1057633557u, 1057633557u, 0, J1_TOLERANCE, 0},
{267, 1082130432u, 3179757989u, 3179757989u, 0, J1_TOLERANCE, 0},
{268, 1085695590u, 3198547630u, 3198547630u, 0, J1_TOLERANCE, 0},
{269, 1089260749u, 1038123701u, 1038123701u, 0, J1_TOLERANCE, 0},
{270, 1091672474u, 1047396948u, 1047396948u, 0, J1_TOLERANCE, 0},
{271, 1093455053u, 3188823064u, 3188823064u, 0, J1_TOLERANCE, 0},
{272, 1095237632u, 3190387868u, 3190387868u, 0, J1_TOLERANCE, 0},
{273, 1097020211u, 1042711397u, 1042711397u, 0, J1_TOLERANCE, 0},
{274, 1098802790u, 1037909458u, 1037909458u, 0, J1_TOLERANCE, 0},
{275, 1099746509u, 3190821313u, 3190821313u, 0, J1_TOLERANCE, 0},
{276, 1100637798u, 3177642610u, 3177642610u, 0, J1_TOLERANCE, 0},
{277, 1101529088u, 1043282474u, 1043282474u, 0, J1_TOLERANCE, 0},
{278, 1102420378u, 1009037734u, 1009037734u, 0, J1_TOLERANCE, 0},
{279, 1103311667u, 3190100663u, 3190100663u, 0, J1_TOLERANCE, 0},
{280, 1104202957u, 1022984661u, 1022984661u, 0, J1_TOLERANCE, 0},
{281, 1105094246u, 1041426372u, 1041426372u, 0, J1_TOLERANCE, 0},
{282, 1105985536u, 3179524627u, 3179524627u, 0, J1_TOLERANCE, 0}

// AUTOMATICALLY GENERATED VECTORS STOP

};

#endif // CYGONCE_LIBM_J1_H multiple inclusion protection

// EOF j1f.h
