#include QMK_KEYBOARD_H

// TODO: Maybe the zig compiler can squeeze more space out of the image...

enum unicode_names {
    ae,
    Ae,
    ue,
    Ue,
    oe,
    Oe,
    sz,

    ArrowLeft,
    ArrowDown,
    ArrowUp,
    ArrowRight,

    DArrowLeft,
    DArrowDown,
    DArrowUp,
    DArrowRight,

    // LaTeX
    LRA,

    in,
    notin,
    eq,
    neq,

    exists,
    nexists,
    forall,

    pm,
    cdot,
    times,

    cap,
    cup,

    subset,
    subseteq,
    nsubset,
    nsubseteq,

    N,
    Z,
    Q,
    R,
    C,
};

const uint32_t PROGMEM unicode_map[] = {
    [ae] = 0xe4,
    [Ae] = 0xc4,
    [ue] = 0xfc,
    [Ue] = 0xdc,
    [oe] = 0Xf6,
    [Oe] = 0xd6,
    [sz] = 0xdf,

    [ArrowLeft]  = 0x2190,
    [ArrowDown]  = 0x2193,
    [ArrowUp]    = 0x2191,
    [ArrowRight] = 0x2192,

    [DArrowLeft]  = 0x21d0,
    [DArrowDown]  = 0x21d3,
    [DArrowUp]    = 0x21d1,
    [DArrowRight] = 0x21d2,

    // LaTeX
    [LRA] = 0x21d4,

    [in]    = 0x2208,
    [notin] = 0x2209,
    [eq] = 0x3d,
    [neq]   = 0x2260,

    [exists]  = 0x2203,
    [nexists] = 0x2204,
    [forall]  = 0x2200,

    [pm]    = 0xb1,
    [cdot]  = 0x2022,
    [times] = 0xd7,

    [cap] = 0x2229,
    [cup] = 0x222a,

    [subset]    = 0x2282,
    [subseteq]  = 0x2286,
    [nsubset]   = 0x2284,
    [nsubseteq] = 0x2288,

    [N] = 0x2215,
    [Z] = 0x2124,
    [Q] = 0x211a,
    [R] = 0x211d,
    [C] = 0x2102,
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

            KC_TRNS,   KC_TRNS,   KC_TRNS,           KC_LCTL,   KC_BTN1,   KC_BTN2,
                       KC_TRNS,   KC_TRNS,                      KC_TRNS,    KC_DEL
),


    [4] = LAYOUT_split_4x6_5(
            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   X(forall),   KC_NO,
            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                     XP(in, notin), XP(cap, cup), XP(subset, nsubset), XP(subseteq, nsubseteq), XP(exists, nexists), XP(eq, neq),
            XP(ae, Ae),   XP(oe, Oe),   X(sz),   XP(ue, Ue),   KC_NO,   KC_NO,      KC_NO,  XP(ArrowLeft, DArrowLeft),  XP(ArrowDown, DArrowDown)  ,  XP(ArrowUp, DArrowUp)  ,  XP(ArrowRight, DArrowRight),   KC_NO,
            KC_NO,   X(N),   X(Z),   X(Q),   X(R),   X(C),                          X(pm), X(cdot), X(times),  X(LRA), KC_NO,   KC_NO,

            KC_TRNS,   KC_TRNS,     KC_TRNS,           KC_TRNS,   KC_TRNS,   KC_TRNS,
                       KC_TRNS,   KC_TRNS,                    KC_TRNS,   KC_TRNS
),

    // clang-format on
};