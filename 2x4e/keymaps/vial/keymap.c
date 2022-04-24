#include QMK_KEYBOARD_H


enum layers { NORMAL_LAYER, SECOND_LAYER, THIRD_LAYER, FOURTH_LAYER };

#define ____ KC_TRNS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [NORMAL_LAYER] = LAYOUT(
       	KC_0 , KC_1 , KC_2, KC_3, KC_4,
        KC_5 , KC_6 , KC_7, KC_8, ____
    ),

    [SECOND_LAYER] = LAYOUT(
        ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____
    ),

    [THIRD_LAYER] = LAYOUT(
        ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____
    ),

    [FOURTH_LAYER] = LAYOUT(
        ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____
    ),

};