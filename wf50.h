#pragma once

#include "quantum.h"


#define LAYOUT( \
	L00, L01, L02, L03, L04, L05, 	R00, R01, R02, R03, R04, R05, \
	L10, L11, L12, L13, L14, L15, 	R10, R11, R12, R13, R14, R15, \
	L20, L21, L22, L23, L24, L25, 	R20, R21, R22, R23, R24, R25, \
	L30, L31, L32, L33,      L35, 	R30,      R32, R33, R34, R35, \
	                    L44, L45,  	R40, R41  					  \
  	) \
	{ \
		{ L00,   L01,   L02,   L03,   L04,   L05}, \
		{ L10,   L11,   L12,   L13,   L14,   L15}, \
		{ L20,   L21,   L22,   L23,   L24,   L25}, \
		{ L30,   L31,   L32,   L33,   KC_NO, L35}, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, L44,   L45}, \
\
		{ R00,   R01,   R02,   R03,   R04,   R05}, \
		{ R10,   R11,   R12,   R13,   R14,   R15}, \
		{ R20,   R21,   R22,   R23,   R24,   R25}, \
		{ R30,   KC_NO, R32,   R33,   R34,   R35}, \
		{ R40,   R41, KC_NO, KC_NO, KC_NO, KC_NO}  \
	}
