#include QMK_KEYBOARD_H


#define _BASE 0
#define _MOVEMENT 1
#define _NUM 2
#define _FUNC 3
#define _UTIL 4

// For futher customization
// enum custom_keycodes {
//   BASE = SAFE_RANGE,
//   MOVEMENT,
//   NUM,
//   FUNC,
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_ESC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_RCTL,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_CAPS,          TG(_MOVEMENT),KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LOPT, KC_LCMD, KC_SPC,                    MO(_MOVEMENT),MO(_NUM),MO(_FUNC) 
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_MOVEMENT] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_PIPE, KC_LT,   KC_LCBR, KC_LPRN, KC_LBRC,                            KC_RBRC, KC_RPRN, KC_RCBR, KC_GT,   KC_GRV,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_COLN, KC_DQT,  KC_QUOT,  KC_BSLS, KC_QUES,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤ 
      _______, _______, _______, _______, KC_EQL,  KC_MINS, KC_DEL,           _______, KC_UNDS, KC_PPLS, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, KC_ENT,                    _______, _______, _______ 
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NUM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, _______,                            KC_P0,  KC_P1,   KC_P2,   KC_P3,   KC_PAST, KC_PSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_DLR,  KC_PERC, KC_CIRC, _______,                            KC_PEQL, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_PMNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,          _______, KC_PDOT, KC_P7,   KC_P8,   KC_P9,   _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, KC_BSPC,                   _______, _______, _______ 
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FUNC] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     MO(_UTIL),_______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,                              _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,                              _______, KC_TAB,  S(KC_TAB),_______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  S(KC_TAB),         _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, KC_TAB,                   _______, _______, _______ 
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    // )
  ),

    [_UTIL] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, QK_RBT ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, DB_TOGG,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, EE_CLR ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, QK_BOOT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______ 
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

enum combos {
    JK_ESC,
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
combo_t key_combos[] = {
  [JK_ESC] = COMBO(jk_combo, KC_ESC),
};
// #ifdef RGB_MATRIX_ENABLE
//
// // 明度の上限を抑える
// void set_color(int index, uint8_t hsvred, uint8_t hsvgreen, uint8_t hsvblue) {
//     HSV hsv = (HSV){hsvred, hsvgreen, hsvblue};
//     if (hsv.v > rgb_matrix_get_val()) {
//         hsv.v = rgb_matrix_get_val();
//     }
//     RGB rgb = hsv_to_rgb(hsv);
//     rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
// }
//
// bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//     // RGB_MATRIX_SOLID_COLOR(1)のときに、自作LEDロジックが動くようにする
//     if (rgb_matrix_get_mode() != 1) {
//        return false;
//     }
//
//     // 一度全消灯
//     rgb_matrix_set_color_all(RGB_OFF);
//
//     // レイヤーごとにLEDを切り替える
//     switch (get_highest_layer(layer_state | default_layer_state)) {
//       case _MOVEMENT:
//         if (is_keyboard_left()) {
//           // left
//           set_color(0, HSV_YELLOW);
//           // set_color(11, HSV_YELLOW);
//           // ・・・
//         }else{
//           // right
//           set_color(34, HSV_BLUE);
//           // set_color(44, HSV_BLUE);
//           // ・・・
//         }
//         break;
//       case _NUM:
//         // 略
//         break;
//       default:
//         break;
//     }
//   return false;
// }
//
// #endif
// RGB_MATRIX_ENABLE
// bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//     for (uint8_t i = led_min; i < led_max; i++) {
//         switch(get_highest_layer(layer_state|default_layer_state)) {
//             case _MOVEMENT:
//                 rgb_matrix_set_color(i, 0xA3,  0xBE, 0x8C);
//                 break;
//             case _NUM:
//                 rgb_matrix_set_color(i, 0xD0,  0x87, 0x70);
//                 break;
//             case _FUNC:
//                 rgb_matrix_set_color(i, 0xEB,  0xCB, 0x8B);
//                 break;
//             case _UTIL:
//                 rgb_matrix_set_color(i, 0xBF,  0x61, 0x6A);
//                 break;
//             default: //  for any other layers, or the default layer
//                 rgb_matrix_set_color(i, 0x81,  0xA1, 0xC1);
//                 break;
//         }
//     }
//     return false;
// }

// per-layer rgb
// layer_state_t layer_state_set_user(layer_state_t state) {
//     switch (get_highest_layer(state)) {
//     case _MOVEMENT:
//         rgblight_setrgb (0xA3,  0xBE, 0x8C);
//         break;
//     case _NUM:
//         rgblight_setrgb (0xD0,  0x87, 0x70);
//         break;
//     case _FUNC:
//         rgblight_setrgb (0xEB,  0xCB, 0x8B);
//         break;
//     case _UTIL:
//         rgblight_setrgb (0xBF,  0x61, 0x6A);
//         break;
//     default: //  for any other layers, or the default layer
//         rgblight_setrgb (0x81,  0xA1, 0xC1);
//         break;
//     }
//   return state;
// }
//
// This is for further customization per keypresses
// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case BASE:
//       if (record->event.pressed) {
//         set_single_persistent_default_layer(_BASE);
//       }
//       return false;
//       break;
//     case MOVEMENT:
//       if (record->event.pressed) {
//         layer_on(_MOVEMENT);
//         update_tri_layer(_MOVEMENT, _NUM, _FUNC);
//       } else {
//         layer_off(_MOVEMENT);
//         update_tri_layer(_MOVEMENT, _NUM, _FUNC);
//       }
//       return false;
//       break;
//     case NUM:
//       if (record->event.pressed) {
//         layer_on(_NUM);
//         update_tri_layer(_MOVEMENT, _NUM, _FUNC);
//       } else {
//         layer_off(_NUM);
//         update_tri_layer(_MOVEMENT, _NUM, _FUNC);
//       }
//       return false;
//       break;
//     case FUNC:
//       if (record->event.pressed) {
//         layer_on(_FUNC);
//       } else {
//         layer_off(_FUNC);
//       }
//       return false;
//       break;
//   }
//   return true;
// }
//
