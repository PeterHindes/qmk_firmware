#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_numpad_5x5(
        KC_A,
        KC_B,
        KC_C,

        QK_BOOT,
        RGB_TOG,
        KC_X,
        KC_C,
        KC_V,


        KC_NLCK,
        KC_PSLS,
        KC_PAST,
        KC_PMNS,

        KC_P7,
        KC_P8,
        KC_P9,
        KC_PPLS,

        KC_P4,
        KC_P5,
        KC_P6,

        KC_P1,
        KC_P2,
        KC_P3,
        KC_PENT,

        KC_P0,
        KC_PDOT
        )
};

// #if defined(ENCODER_MAP_ENABLE)
// const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
//      // Mapping for Base layer
//     [0] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN), // Mappings for 1st Encoder
//       ENCODER_CCW_CW(KC_VOLD, KC_VOLU), // Mappings for 2nd Encoder
//       ENCODER_CCW_CW(KC_UP, KC_DOWN) // Mappings for 3nd Encoder
//       },



//     // [1] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),  ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  }, // Mapping for Layer 1
//     // [2] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),  ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  }, // Mapping for Layer 2
//     // [3] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD), ENCODER_CCW_CW(KC_LEFT, KC_RIGHT) }, // Mapping for Layer 3

//     // You can add more layers here if you need them, or you can also delete lines for layers you are not using
// };
// #endif


bool encoder_update_user(uint8_t index, bool clockwise) {
    tap_code(KC_U);
    return false;
}

// void keyboard_post_init_user(void) {
//     rgblight_enable_noeeprom();
//     rgblight_sethsv_noeeprom_cyan();
//     // rgblight_mode_noeeprom( );
// }
