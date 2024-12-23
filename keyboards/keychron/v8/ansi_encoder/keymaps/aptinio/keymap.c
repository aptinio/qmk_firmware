#include QMK_KEYBOARD_H

// clang-format off

enum layers{
    MAC_BASE,
    WIN_BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_69(
        QK_GESC, KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
        KC_LCTL, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,           KC_HOME,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
        KC_LCTL, KC_LWIN,  KC_LALT,           KC_SPC,           MO(_FN),  MO(_FN),          KC_SPC,            KC_RALT,            KC_LEFT, KC_DOWN, KC_RGHT),

    [WIN_BASE] = LAYOUT_ansi_69(
        _______, _______,  _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, _______,  _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, _______,  _______,  _______, _______, _______,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______),

    [_FN] = LAYOUT_ansi_69(
        KC_GRV,  KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,          RM_TOGG,
        _______, RM_NEXT,  RM_HUEU,  RM_SATU, RM_SPDU, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        KC_CAPS, RM_PREV,  RM_HUED,  RM_SATD, RM_SPDD, _______,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______, KC_PGUP,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            KC_HOME, KC_PGDN, KC_END )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_FN]      = {ENCODER_CCW_CW(RM_VALD, RM_VALU)}
};
#endif // ENCODER_MAP_ENABLE
