#include QMK_KEYBOARD_H

enum unicode_names {
    BANG,
    IRONY,
    SNEK,
};

const uint32_t PROGMEM unicode_map[] = {
    [BANG]  = 0X203D,  // ‽
    [IRONY] = 0X2E2E,  // ⸮
    [SNEK]  = 0XF6, // 🐍
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [0] = LAYOUT_split_4x6_5(
            KC_1,      KC_2,      KC_3,     KC_4,   KC_5,   KC_6,           KC_7,   KC_8,   KC_9,   KC_0,   KC_LBRC,   KC_RBRC,
            KC_ESC,    KC_COMM,   KC_DOT,   KC_P,   KC_Y,   KC_F,           KC_G,   KC_C,   KC_R,   KC_L,   KC_QUOT,   KC_EQL,
            KC_A,      KC_O,      KC_E,     KC_U,   KC_I,   KC_D,           KC_H,   KC_T,   KC_N,   KC_S,   KC_MINS,   KC_GRV,
            KC_SCLN,   KC_Q,      KC_J,     KC_K,   KC_X,   KC_B,           KC_M,   KC_W,   KC_V,   KC_Z,   KC_SLSH,   KC_BACKSLASH,

                       KC_LSFT,   KC_SPC,    MO(3),                                MO(1),   KC_ENT,    KC_TAB,
                                  KC_LEFT_ALT,   KC_LCTL,                                       KC_LGUI,   KC_BSPC
),

   [1] = LAYOUT_split_4x6_5(
            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,            KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
            KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,           KC_LCTL,   KC_HOME,   KC_NO,     KC_NO,     KC_END,    KC_NO,
            KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,   KC_F18,           KC_NO,     KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   KC_NO,
            KC_F19,   KC_F20,   KC_F21,   KC_F22,   KC_F23,   KC_F24,           KC_NO,     KC_WH_L,   KC_WH_D,   KC_WH_U,   KC_WH_R,   KC_TRNS,

                      KC_TRNS,   MO(4),   MO(2),                                     KC_TRNS,   KC_TRNS,   KC_TRNS,
                                 KC_RIGHT_ALT,     KC_RIGHT_CTRL,                                              KC_TRNS,   KC_TRNS
),

    [2] = LAYOUT_split_4x6_5(
            RESET,   KC_PWR,   KC_SLEP,   KC_NO,   KC_NO,   KC_NO,           KC_NO,   KC_NO,   KC_NO,     KC_NO,     RGB_M_SN,   RGB_M_P,
            KC_NO,   KC_NO,    KC_NO,     KC_NO,   KC_NO,   KC_NO,           KC_NO,   KC_NO,   KC_NO,     KC_NO,     RGB_M_K,    RGB_M_R,
            KC_PRINT_SCREEN,   KC_NO,    KC_NO,     KC_NO,   KC_NO,   KC_NO,           KC_NO,   KC_NO,   RGB_VAD,   RGB_VAI,   RGB_M_X,     RGB_M_B,
            KC_NO,   KC_NO,    KC_NO,     KC_NO,   KC_NO,   KC_A,           KC_NO,   KC_NO,   KC_NO,     RGB_M_T,   RGB_M_G,    RGB_M_SW,

                     KC_TRNS,   KC_TRNS,   KC_TRNS,           KC_TRNS,   KC_TRNS,   KC_TRNS,
                              KC_TRNS,   KC_TRNS,                    KC_TRNS,   KC_TRNS
),


    [3] = LAYOUT_split_4x6_5(
            KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,             KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
            KC_NO,   KC_MPRV,   KC_VOLD,   KC_VOLU,   KC_MNXT,   KC_MPLY,           KC_NO,     KC_HOME,   KC_MS_ACCEL1,     KC_MS_ACCEL2,     KC_END,    KC_NO,
            KC_NO,   KC_WBAK,   KC_WREF,   KC_WSCH,   KC_WFWD,   KC_WHOM,           KC_MPLY,   KC_MS_L,   KC_MS_D,   KC_MS_U,   KC_MS_R,   KC_NO,
            KC_NO,   KC_FIND,   KC_UNDO,     KC_AGIN,     KC_COPY,     KC_NO,             KC_NO,     KC_WH_L,   KC_WH_D,   KC_WH_U,   KC_WH_R,   KC_TRNS,

            KC_TRNS,   KC_TRNS,   KC_TRNS,           KC_LCTL,   KC_BTN1,   KC_BTN3,
                       KC_TRNS,   KC_TRNS,                      KC_DEL,    KC_BTN2
),


    [4] = LAYOUT_split_4x6_5(
            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   X(SNEK),            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,

            KC_TRNS,   KC_TRNS,     KC_TRNS,           KC_TRNS,   KC_TRNS,   KC_TRNS,
                       KC_TRNS,   KC_TRNS,                    KC_TRNS,   KC_TRNS
),


    // clang-format on
};