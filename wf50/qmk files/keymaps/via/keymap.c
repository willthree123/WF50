#include "wf50.h"
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------,  ,-----------------------------------------.
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * | Ctrl | GUI  | Alt  |  F14 |      | Space|  | Space|      | Left | Down |  Up  |Right |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |                           |  Fn1 |  Fn2 |  |  Fn3 |  Fn4 |                           |
 * `-----------------------------------------`  `-----------------------------------------' */
	[0] = LAYOUT(
		KC_ESC,  KC_Q,    KC_W,    KC_E,  KC_R,   KC_T, 	KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_T,
		KC_TAB,  KC_A,    KC_S,    KC_D,  KC_F,   KC_G, 	KC_H,   KC_J,   KC_K,   KC_L,   KC_R,   KC_T,
		KC_LSFT, KC_Z,    KC_X,    KC_C,  KC_V,   KC_B, 	KC_N,   KC_M,   KC_W,   KC_E,   KC_R,   KC_T,
		KC_LCTL, KC_LALT, KC_LGUI, RESET, 	KC_SPC, 			KC_SPC,	    KC_W,   KC_E,   KC_R,   KC_T,
										KC_SPC,  KC_SPC,  	KC_SPC,  KC_SPC								),
};
