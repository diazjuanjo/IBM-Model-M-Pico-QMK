#include QMK_KEYBOARD_H

#define K_LGUI LGUI_T(KC_NUBS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_all(
    KC_ESC ,          KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_PSCR, KC_SCRL, KC_PAUS,
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSPC, KC_INS , KC_HOME, KC_PGUP, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL , KC_END , KC_PGDN, KC_P7,   KC_P8  , KC_P9  , KC_PPLS,
    KC_CAPS, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT ,                            KC_P4,   KC_P5  , KC_P6  , KC_PPLS,
    KC_LSFT, K_LGUI , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,          KC_RSFT,          KC_UP  ,          KC_P1,   KC_P2  , KC_P3  , KC_PENT,
    KC_LCTL,          KC_LALT,                            KC_SPC ,                                     KC_RALT,          KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,            KC_PDOT
  )
};

// [0] = LAYOUT(
//         _______, _______, KC_ESC,  KC_NUBS, KC_F4,   KC_G,    KC_F5,   KC_H,    KC_F6,   _______, KC_QUOT, _______, KC_P0,   KC_PDOT, KC_UP,   KC_LALT,
//         _______, KC_LSFT, KC_TAB,  KC_CAPS, KC_F3,   KC_T,    KC_BSPC, KC_Y,    KC_RBRC, KC_F7,   KC_LBRC, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, _______,
//         KC_LCTL, _______, KC_GRV,  KC_F1,   KC_F2,   KC_5,    KC_F9,   KC_6,    KC_EQL,  KC_F8,   KC_MINS, KC_DEL,  KC_INS,  KC_PGUP, KC_HOME, _______,
//         _______, _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_F10,  KC_7,    KC_8,    KC_9,    KC_0,    KC_F11,  KC_F12,  KC_PGDN, KC_END,  KC_PSCR,
//         _______, _______, KC_Q,    KC_W,    KC_E,    KC_R,    _______, KC_U,    KC_I,    KC_O,    KC_P,    KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_SCRL,
//         _______, _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_BSLS, KC_J,    KC_K,    KC_L,    KC_SCLN, KC_P1,   KC_P2,   KC_P3,   KC_PENT, _______,
//         KC_RCTL, KC_RSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_ENT,  KC_M,    KC_COMM, KC_DOT,  KC_NUHS, KC_NUM,  KC_PSLS, KC_PAST, KC_PAUS, _______,
//         _______, _______, _______, _______, _______, KC_B,    KC_SPC,  KC_N,    _______, _______, KC_SLSH, KC_DOWN, KC_RGHT, KC_PMNS, KC_LEFT, KC_RALT
//     )