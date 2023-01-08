#include "nsidorenco.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_nsidorenco(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
           DK_TILDE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    DK_UMLAUT,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX,  KC_J,    KC_G,    KC_M,    KC_P,    KC_V,                               MY_MINS, KC_DOT,  MY_SLSH, DK_DQT,  DK_SQT,  XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX,  MT_C,    MT_S,    MT_N,    MT_T,    KC_W,                               KC_COMM, MT_A,    MT_E,    MT_I,    MT_H,    XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX,  KC_X,    LT_F,    KC_L,    KC_D,    KC_B,    KC_MPLY,          KC_LCMD, DK_COLN, LT_U,    KC_O,    KC_Y,    KC_K,    XXXXXXX,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                          KC_R,  MO(_NAVR),  KC_ESC,                   MO(_SYM), KC_SPC,  XXXXXXX
                                      // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_SYM] = LAYOUT_nsidorenco(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
           KC_TILDE, KC_EXLM, KC_AT,  KC_HASH, DK_DLLR, KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, EE_CLR,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX, KC_HASH, DK_CIRC, DK_DLLR, DK_LBRC, DK_RBRC,                            XXXXXXX, REPEAT,  XXXXXXX, XXXXXXX, KC_COLN, XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX, DK_TILDE,DK_AT,   KC_PERC, DK_LPRN, DK_RPRN,                            XXXXXXX, OS_SHFT, OS_CTRL, OS_CMD,  OS_ALT,  XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX, DK_TICK, ARROWS,  DIAMS,   DK_LBKT, DK_RBKT, XXXXXXX,          XXXXXXX, AM_END,  KC_BSPC, KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                          DK_BSLS, DK_EQL,  DK_UNDS,                   XXXXXXX, XXXXXXX, XXXXXXX
                                      // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_NUM] = LAYOUT_nsidorenco(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
            DK_TILDE,KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                           KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, EE_CLR,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
            DK_PLUS, DK_LBRC, KC_6,    KC_5,    KC_4,    KC_BSPC,                           XXXXXXX, REPEAT,  XXXXXXX, XXXXXXX, KC_COLN, XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
            KC_DQUO, DK_LT,   KC_3,    KC_2,    KC_1,    DK_GT,                             KC_SPC,  OS_SHFT, OS_CTRL, OS_CMD,  OS_ALT,  KC_BSPC,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
            DK_BSLS, DK_LBKT, KC_9,    KC_8,    KC_7,    DK_RBKT, XXXXXXX,         XXXXXXX, KC_ENT,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                           KC_DOT,  KC_0,    MY_MINS,                  XXXXXXX, XXXXXXX, XXXXXXX
                                      // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_NAVR] = LAYOUT_nsidorenco(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
            XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
            XXXXXXX,SAFE_RST,XXXXXXX, XXXXXXX, XXXXXXX, LCA(KC_DEL),                        UC_CUT,  UC_CPY,  UC_PST,  UC_UND,  UC_RDO,  XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
            XXXXXXX, OS_LALT, OS_CMD,  OS_CTRL, OS_SHFT, KC_BSPC,                            KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT, CAPSWRD, XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
            XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,  XXXXXXX,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                           XXXXXXX, XXXXXXX, XXXXXXX,                  KC_TAB,  KC_ENT,  XXXXXXX
                                      // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_MOUR] = LAYOUT_nsidorenco(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
           XXXXXXX,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           _______, _______, _______, KC_BTN3,  DPI,     SDPI,                               _______, _______, _______, _______, _______, _______,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           _______, _______, _______, _______, _______, _______,                             _______, _______, _______, _______, _______, _______,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
           _______, AM_END,  SNIPE,   DRAG,   KC_BTN1, KC_BTN2, _______,          _______, _______, _______,  _______, _______,TO(_BASE),_______,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                          _______, _______, _______,                   _______, _______,  _______
                                      // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_SPEC] = LAYOUT_nsidorenco(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
           XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,                            KC_VOLU, DK_AE,   DK_OE,   DK_AA,   XXXXXXX, XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                             KC_MPLY, OS_SHFT, OS_CTRL, OS_CMD,  OS_ALT,  XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           XXXXXXX, KC_VOLD, KC_Q,    KC_Z,    XXXXXXX, XXXXXXX, XXXXXXX,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                           XXXXXXX,XXXXXXX,XXXXXXX,                     XXXXXXX,XXXXXXX, XXXXXXX
                                      // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),
};

uint16_t linger_key        = 0;  // keycode for linger actions (ex. "Qu")
uint32_t linger_timer      = 0;  // time to hold a key before something else happens.
uint32_t state_reset_timer = 0;  // time to leave a state active before shutting it down automatically.

#if defined(POINTING_DEVICE_AUTO_MOUSE_ENABLE)
bool is_mouse_record_kb(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case LT_U:
            return false;
        case DRAG:
        case SNIPE:
        case DPI:
        case SDPI:
            return true;
        default:
            return is_mouse_record_user(keycode, record);
    }
}

void pointing_device_init_user(void) {
    set_auto_mouse_layer(_MOUR);
    set_auto_mouse_enable(true);
}
#endif

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_MINS:
        case MY_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case DK_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}

void td_arrow(qk_tap_dance_state_t *state, void *user_data) {
    uint8_t mod_state = get_mods();
    bool is_shifted = (mod_state & MOD_MASK_SHIFT);
    // uint8_t oneshot_mod_state = get_oneshot_mods();
    clear_mods();
    // clear_oneshot_mods();
    if (state->count == 1) {
        if (is_shifted) {
            tap_code16(DK_EQL);
        } else {
            tap_code(KC_SLSH);
        }
        tap_code16(DK_GT);
    } else {
        tap_code16(DK_LT);
        if (is_shifted) {
            tap_code16(DK_EQL);
        } else {
            tap_code(KC_SLSH);
        }
    }
    set_mods(mod_state);
    // set_oneshot_mods(oneshot_mod_state);
    reset_tap_dance(state);
}

void td_diam(qk_tap_dance_state_t *state, void *user_data) {
    uint8_t mod_state = get_mods();
    // uint8_t oneshot_mod_state = get_oneshot_mods();
    clear_mods();
    // clear_oneshot_mods();
    if (state->count == 1) {
        tap_code16(DK_BAR);
        tap_code16(DK_GT);
    } else {
        tap_code16(DK_LT);
        tap_code16(DK_BAR);

    }
    set_mods(mod_state);
    // set_oneshot_mods(oneshot_mod_state);
    reset_tap_dance(state);
}

void td_reset(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count >= 5) {
        reset_keyboard();
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_ARROW] = ACTION_TAP_DANCE_FN(td_arrow),
    [TD_DIAM] = ACTION_TAP_DANCE_FN(td_diam),
    [TD_RESET] = ACTION_TAP_DANCE_FN(td_reset),
};

bool is_oneshot_cancel_key(uint16_t keycode) {
    switch (keycode) {
        case MO(_SYM):
        case MO(_NAVR):
            return true;
        default:
            return false;
    }
}

bool is_oneshot_ignored_key(uint16_t keycode) {
    switch (keycode) {
        case LT_U:
        case OS_SHFT:
        case OS_CTRL:
        case OS_ALT:
        case OS_LALT:
        case OS_CMD:
            return true;
        default:
            return false;
    }
}

bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record,
                     uint16_t other_keycode, keyrecord_t* other_record) {

  if (tap_hold_record->event.key.row % (MATRIX_ROWS / 2) == (MATRIX_ROWS / 2) - 1) { return true; }
  // if (tap_hold_record->event.key.row == 3) { return true; }
  return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) { return 400; }

// #define GET_TAP_KC(dual_role_key) dual_role_key & 0xFF
// uint16_t last_keycode = KC_NO;
// uint8_t last_modifier = 0;
//
uint8_t mod_state;
// uint8_t oneshot_mod_state;
//
// void process_repeat_key(uint16_t keycode, const keyrecord_t *record) {
//     if (keycode != REPEAT) {
//         // Early return when holding down a pure layer key
//         // to retain modifiers
//         switch (keycode) {
//             case QK_DEF_LAYER ... QK_DEF_LAYER_MAX:
//             case QK_MOMENTARY ... QK_MOMENTARY_MAX:
//             case QK_LAYER_MOD ... QK_LAYER_MOD_MAX:
//             case QK_ONE_SHOT_LAYER ... QK_ONE_SHOT_LAYER_MAX:
//             case QK_TOGGLE_LAYER ... QK_TOGGLE_LAYER_MAX:
//             case QK_TO ... QK_TO_MAX:
//             case QK_LAYER_TAP_TOGGLE ... QK_LAYER_TAP_TOGGLE_MAX:
//             case LT_R:
//             case KC_BSPC:
//                 return;
//         }
//         // last_modifier = oneshot_mod_state > mod_state ? oneshot_mod_state : mod_state;
//         last_modifier = mod_state;
//         switch (keycode) {
//             case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
//             case QK_MOD_TAP ... QK_MOD_TAP_MAX:
//                 if (record->event.pressed) {
//                     last_keycode = GET_TAP_KC(keycode);
//                 }
//                 break;
//             default:
//                 if (record->event.pressed) {
//                     last_keycode = keycode;
//                 }
//                 break;
//         }
//     } else { // keycode == REPEAT
//         if (record->event.pressed) {
//             register_mods(last_modifier);
//             register_code16(last_keycode);
//         } else {
//             unregister_code16(last_keycode);
//             unregister_mods(last_modifier);
//         }
//     }
// }

oneshot_state os_shft_state = os_up_unqueued;
oneshot_state os_ctrl_state = os_up_unqueued;
oneshot_state os_alt_state = os_up_unqueued;
oneshot_state os_lalt_state = os_up_unqueued;
oneshot_state os_cmd_state = os_up_unqueued;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    bool return_state = true;
    mod_state = get_mods();
    // oneshot_mod_state = get_oneshot_mods();

    bool is_shifted = (mod_state & MOD_MASK_SHIFT);
    // bool is_shifted = (mod_state & MOD_MASK_SHIFT) || (oneshot_mod_state & MOD_MASK_SHIFT);

    // process_repeat_key(keycode, record);

    update_oneshot(&os_shft_state, KC_LSFT, OS_SHFT, keycode, record);
    update_oneshot(&os_ctrl_state, KC_LCTL, OS_CTRL, keycode, record);
    update_oneshot(&os_alt_state, KC_RALT, OS_ALT, keycode, record);
    update_oneshot(&os_lalt_state, KC_LALT, OS_LALT, keycode, record);
    update_oneshot(&os_cmd_state, KC_LCMD, OS_CMD, keycode, record);

    if (!process_achordion(keycode, record)) { return false; }
    if (!process_adaptive_key(keycode, record)) { return false; }

    if (record->event.pressed) {
        switch (keycode) {
#ifndef KEY_OVERRIDE_ENABLE
            case KC_BSPC:
                if (is_shifted) {
                    clear_mods();
                    tap_code(KC_DEL);
                    set_mods(mod_state);
                    return_state = false;
                }
                break;
            case DK_COLN:
                if (is_shifted) {
                    clear_mods();
                    tap_code16(DK_SCOLN);
                    set_mods(mod_state);
                    return_state = false;
                }
                break;
            case KC_DOT:
                if (is_shifted) {
                    clear_mods();
                    tap_code16(DK_AMPR);
                    set_mods(mod_state);
                    return_state = false;
                }
                break;
            case DK_DQT:
                if (is_shifted) {
                    clear_mods();
                    tap_code16(DK_QUES);
                    set_mods(mod_state);
                    return_state = false;
                }
                break;
            case DK_SQT:
                if (is_shifted) {
                    clear_mods();
                    tap_code16(KC_EXLM);
                    set_mods(mod_state);
                    return_state = false;
                }
                break;
            case KC_COMM:
                if (is_shifted) {
                    clear_mods();
                    tap_code16(DK_BAR);
                    set_mods(mod_state);
                    return_state = false;
                }
                break;
            case DK_EQL:
                if (mod_state & MOD_MASK_GUI) {
                    clear_mods();
                    tap_code16(LGUI(KC_0));
                    set_mods(mod_state);
                    return_state = false;
                } else if (mod_state & MOD_MASK_CTRL) {
                    clear_mods();
                    tap_code16(LCTL(KC_0));
                    set_mods(mod_state);
                    return_state = false;
                }
                break;
#endif
            case AM_END:
#if defined(POINTING_DEVICE_AUTO_MOUSE_ENABLE)
                auto_mouse_layer_off();
#else
                layer_move(_BASE);
#endif
                return_state = false;
                break;
            case MY_MINS:
                if (is_shifted) {
                    clear_mods();
                    // clear_oneshot_mods();
                    tap_code16(DK_PLUS);
                    set_mods(mod_state);
                    // set_oneshot_mods(oneshot_mod_state);
                } else {
                    tap_code(KC_SLSH);
                }
                return_state = false;
                break;
            case MY_SLSH:
                if (is_shifted) {
                    clear_mods();
                    // clear_oneshot_mods();
                    tap_code16(DK_ASTR);
                    set_mods(mod_state);
                    // set_oneshot_mods(oneshot_mod_state);
                } else {
                    add_mods(MOD_MASK_SHIFT);
                    tap_code(KC_7);
                    set_mods(mod_state);
                }
                return_state = false;
                break;
            case DK_CIRC:
                set_mods(MOD_MASK_SHIFT);
                tap_code(KC_RBRC);
                tap_code(KC_SPC);
                set_mods(mod_state);
                break;
            case KC_Q:                                                 // for linger Qu (ironically, need to handle this directly w/o the macros.)
                if ((!mod_state) || (is_shifted)) {  // can this linger?
                    linger_key   = keycode;                            // may add "u" in matrix_scan_user
                    linger_timer = state_reset_timer = timer_read();   // start timers threshold
                }                                                      // can only linger on no mods or shift
                register_code16(keycode);
                return_state = false;  // don't do more with this record.
                break;
        }
    } else {  // key up event
        switch (keycode) {
            case KC_Q:  // for linger Qu (ironically, need to handle this directly w/o the macros.)
                unregister_code16(keycode);
                linger_key   = 0;      // make sure nothing lingers
                return_state = false;  // don't do more with this record.
                break;
        }
    }
    return return_state;
}

void matrix_scan_user(void) {
    achordion_task();
    if (state_reset_timer) {  // is there an active state to check on?
        if (linger_key) {     // A linger key is being held down
            if (timer_elapsed(linger_timer) > LINGER_TIME) {
                uint8_t saved_mods = get_mods();
                clear_mods();
                unregister_code(KC_LSFT);  // remove shift here.
                unregister_code(KC_RSFT);  // remove shift here.
                switch (linger_key) {      // only one linger_key at a time, obviously
                    case KC_Q:             // already "Q" has been sent; if lingered, add "u"
                        tap_code(KC_U);
                        break;
                    default:
                        break;
                }
                linger_timer = state_reset_timer = 0;  // finished with this state
                set_mods(saved_mods);                  // Restore mods
            }
        }
    }
}

// Key overrides
#if defined(KEY_OVERRIDE_ENABLE)
#undef KO
#define KO(name, mod, modded_key, new_key) const key_override_t name = ko_make_basic(mod, modded_key, new_key);

#include "key_overrides.def"

#undef KO
#define KO(name, mod, modded_key, new_key) &name,

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
#include "key_overrides.def"
    NULL  // Null terminate the array of overrides!
};
#endif

#if defined(COMBO_ENABLE)
  enum combos {
    Q_COMBO,
    Z_COMBO,
    AE_COMBO,
    OE_COMBO,
    AA_COMBO,
    TAB_COMBO,
    RESET_COMBO,
    COMBO_LENGTH
  };
  uint16_t COMBO_LEN = COMBO_LENGTH;
  const uint16_t PROGMEM Q_combo[] = {LT_U, KC_Y, COMBO_END};
  const uint16_t PROGMEM Z_combo[] = {KC_D, LT_F, COMBO_END};
  const uint16_t PROGMEM AE_combo[] = {KC_DOT, MY_SLSH, COMBO_END};
  const uint16_t PROGMEM OE_combo[] = {KC_DOT, DK_DQT, COMBO_END};
  const uint16_t PROGMEM AA_combo[] = {MY_SLSH, DK_DQT, COMBO_END};
  const uint16_t PROGMEM TAB_combo[] = {KC_P, KC_V, COMBO_END};
  const uint16_t PROGMEM RESET_combo[] = {KC_X, KC_K, COMBO_END};
  combo_t key_combos[] = {
    [Q_COMBO] = COMBO(Q_combo, KC_Q),
    [Z_COMBO] = COMBO(Z_combo, KC_Z),
    [AE_COMBO] = COMBO(AE_combo, DK_AE),
    [OE_COMBO] = COMBO(OE_combo, DK_OE),
    [AA_COMBO] = COMBO(AA_combo, DK_AA),
    [TAB_COMBO] = COMBO(TAB_combo, KC_TAB),
    [RESET_COMBO] = COMBO(RESET_combo, QK_BOOT),
  };
// #    include "g/keymap_combo.h"  // to make combo def dictionary work
#endif
