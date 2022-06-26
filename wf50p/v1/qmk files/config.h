#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7766
#define PRODUCT_ID      0x0010
#define DEVICE_VER      0x0010
#define MANUFACTURER    willthree123
#define PRODUCT         wf50p
#define DESCRIPTION     "wf50p"

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 2)
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6 }
#define MATRIX_ROW_PINS_RIGHT { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS_RIGHT { F6, F7, B1, B3, B2, B6 }
#define DIODE_DIRECTION COL2ROW
#define DEBOUNCE 5

#define USE_SERIAL
#define MASTER_LEFT
#define SERIAL_USE_MULTI_TRANSACTION
#define SOFT_SERIAL_PIN D2
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

/* ws2812 RGB LED */
#define RGB_DI_PIN D0
#define RGBLED_NUM 10 
#define RGBLIGHT_SPLIT
#define RGBLIGHT_ANIMATIONS

#define USB_MAX_POWER_CONSUMPTION 500
