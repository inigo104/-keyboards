#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x7363  // Stream Cheap
#define PRODUCT_ID 0x1214
#define DEVICE_VER 0x0001
#define MANUFACTURER Stream Cheap
#define PRODUCT 2x4e

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 5

/* define direct pins used */
#define DIRECT_PINS                          \
    {                                        \
        {B2, B1, D4, D7, F4}, { B6, B3, C6, E6} \
    }

/* encoder pins */
#define ENCODERS_PAD_A { F6 }
#define ENCODERS_PAD_B { F5 }
#define ENCODER_RESOLUTION 2

#define VIAL_ENCODER_DEFAULT { KC_A, KC_B, KC_C, KC_D, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Vial */
#define VIAL_KEYBOARD_UID {0xFA, 0x6D, 0x26, 0xC2, 0x34, 0x90, 0xBE, 0x9A}
#define VIAL_UNLOCK_COMBO_ROWS { 1, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }


/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
