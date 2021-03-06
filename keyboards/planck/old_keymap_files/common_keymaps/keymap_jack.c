#include "keymap.h"

#define KC_MO2 MO(2)
#define KC_MO3 MO(3)

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP( /* Jack */
  TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    BSPC,
  ESC,  A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT,
  LSFT, Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, ENT,
  RSFT, LCTL, LALT, LGUI, MO3,    SPC,     MO2, LEFT, DOWN, UP,  RGHT),
[1] = KEYMAP( /* Jack colemak */
  TAB,  Q,    W,    F,    P,    G,    J,    L,    U,    Y,    SCLN, BSPC,
  ESC,  A,    R,    S,    T,    D,    H,    N,    E,    I,    O,     QUOT,
  LSFT, Z,    X,    C,    V,    B,    K,    M,    COMM, DOT,  SLSH, ENT,
  FN3, LCTL, LALT, LGUI, MO3,    SPC,     MO2, LEFT, DOWN, UP,  RGHT),
[2] = KEYMAP( /* Jack RAISE */
  GRV,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    BSPC,
  TRNS, FN3, FN4, PAUSE, TRNS, TRNS, TRNS, MINS, EQL,  LBRC, RBRC, BSLS,
  TRNS, F11,  F12,  F13,  F14,  F15,  F16,  F17,  F18,  F19,  F20, TRNS,
  TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS,   MO2,  MNXT, VOLD, VOLU, MPLY),
[3] = KEYMAP( /* Jack LOWER */
  FN22, FN10, FN11, FN12, FN13, FN14, FN15, FN16, FN17, FN18, FN19, BSPC,
  TRNS, FN3, FN4, PAUSE, TRNS, TRNS, TRNS, FN20, FN21, FN23, FN24, FN28,
  TRNS, F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  TRNS,
  TRNS, TRNS, TRNS, TRNS, MO3,    TRNS,    TRNS, MNXT, VOLD, VOLU, MPLY),
};
const uint16_t PROGMEM fn_actions[] = {
    [3] = ACTION_DEFAULT_LAYER_SET(0),  
    [4] = ACTION_DEFAULT_LAYER_SET(1),

    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
    [28] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),

    [29] = ACTION_MODS_KEY(MOD_LSFT | MOD_RSFT, KC_PAUSE),
};
