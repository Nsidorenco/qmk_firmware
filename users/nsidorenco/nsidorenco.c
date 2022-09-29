#include "nsidorenco.h"

uint16_t linger_key        = 0;  // keycode for linger actions (ex. "Qu")
uint32_t linger_timer      = 0;  // time to hold a key before something else happens.
uint32_t state_reset_timer = 0;  // time to leave a state active before shutting it down automatically.

void td_arrow(qk_tap_dance_state_t *state, void *user_data) {
    uint8_t mod_state = get_mods();
    uint8_t oneshot_mod_state = get_oneshot_mods();
    clear_mods();
    clear_oneshot_mods();
    if (state->count == 1) {
        tap_code(KC_SLSH);
        tap_code16(DK_GT);
    } else {
        tap_code16(DK_LT);
        tap_code(KC_SLSH);

    }
    set_mods(mod_state);
    set_oneshot_mods(oneshot_mod_state);
    reset_tap_dance(state);
}

void td_diam(qk_tap_dance_state_t *state, void *user_data) {
    uint8_t mod_state = get_mods();
    uint8_t oneshot_mod_state = get_oneshot_mods();
    clear_mods();
    clear_oneshot_mods();
    if (state->count == 1) {
        tap_code16(DK_BAR);
        tap_code16(DK_GT);
    } else {
        tap_code16(DK_LT);
        tap_code16(DK_BAR);

    }
    set_mods(mod_state);
    set_oneshot_mods(oneshot_mod_state);
    reset_tap_dance(state);
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_ARROW] = ACTION_TAP_DANCE_FN(td_arrow),
    [TD_DIAM] = ACTION_TAP_DANCE_FN(td_diam),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_nsidorenco(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
           DK_TILDE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    DK_UMLAUT,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX,  KC_J,    KC_G,    KC_M,    KC_P,    KC_V,                               MY_MINS, KC_DOT,  MY_SLSH, DK_DQT,  DK_SQT,  XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX,  MT_C,    MT_S,    MT_N,    MT_T,    KC_W,                               KC_COMM, MT_A,    MT_E,    MT_I,    MT_H,    XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX,  KC_X,    KC_F,    KC_L,    KC_D,    KC_B,    KC_MPLY,          KC_LCMD, DK_COLN, LT_U,    KC_O,    KC_Y,    KC_K,    XXXXXXX,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                           KC_BSPC, LT_R,   KC_ENT,                    LT_ESC,  KC_SPC,  XXXXXXX
                                      // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_SYM] = LAYOUT_nsidorenco(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
           KC_TILDE, KC_EXLM, KC_AT,  KC_HASH, DK_DLLR, KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, EEP_RST,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX, KC_HASH, DK_CIRC, DK_DLLR, DK_LBRC, DK_RBRC,                            XXXXXXX, REPEAT,  XXXXXXX, XXXXXXX, KC_COLN, XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX, DK_TILDE,DK_AT,   KC_PERC, DK_LPRN, DK_RPRN,                            XXXXXXX, OS_SHFT, OS_CTRL, OS_CMD,  OS_ALT,  XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX, DK_TICK, ARROWS,  DIAMS,   DK_LBKT, DK_RBKT, XXXXXXX,          XXXXXXX, XXXXXXX, KC_ENT,  KC_TAB,  XXXXXXX, DF(_SYM), XXXXXXX,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                          DK_BSLS, DK_EQL,  DK_UNDS,                   XXXXXXX, XXXXXXX, XXXXXXX
                                      // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_NUM] = LAYOUT_nsidorenco(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
            DK_TILDE,KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                           KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, EEP_RST,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
            DK_PLUS, DK_LBRC, KC_6,    KC_5,    KC_4,    DK_RBRC,                           XXXXXXX, REPEAT, XXXXXXX, XXXXXXX, KC_COLN, XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
            KC_DQUO, DK_LT,   KC_3,    KC_2,    KC_1,    DK_GT,                             KC_SPC,  OS_SHFT, OS_CTRL, OS_CMD,  OS_ALT,  KC_BSPC,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
            DK_BSLS, DK_LBKT, KC_9,    KC_8,    KC_7,    DK_RBKT, XXXXXXX,         XXXXXXX, KC_ENT,  XXXXXXX, XXXXXXX, XXXXXXX, DF(_NUM), XXXXXXX,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                           KC_DOT,  KC_0,    MY_MINS,                  XXXXXXX, DF(_BASE), XXXXXXX
                                      // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_NAVR] = LAYOUT_nsidorenco(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
            RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            UC_CUT,  UC_CPY,  UC_PST,  UC_UND,  UC_RDO,  XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
            XXXXXXX, OS_LALT, OS_CMD,  OS_CTRL, OS_SHFT, XXXXXXX,                            KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_CAPS,  XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
            XXXXXXX, DF(_NAVR), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,  XXXXXXX,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                           XXXXXXX, DF(_BASE), XXXXXXX,                 KC_ENT, KC_BSPC,  OS_SHFT
                                      // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_MOUR] = LAYOUT_nsidorenco(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
           RESET,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX, KC_LALT, KC_LGUI, KC_LCTL, KC_LSFT, XXXXXXX,                             KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX, XXXXXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
           XXXXXXX, DF(_MOUR), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX, XXXXXXX,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                          XXXXXXX, DF(_BASE), XXXXXXX,                  KC_BTN1, KC_BTN3, KC_BTN2
                                      // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),
};


bool is_oneshot_cancel_key(uint16_t keycode) {
    switch (keycode) {
        case LT_ESC:
        case LT_R:
        case MO(_SYM):
            return true;
        default:
            return false;
    }
}

bool is_oneshot_ignored_key(uint16_t keycode) {
    switch (keycode) {
        case LT_ESC:
        case LT_R:
        case MO(_SYM):
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

#define GET_TAP_KC(dual_role_key) dual_role_key & 0xFF
uint16_t last_keycode = KC_NO;
uint8_t last_modifier = 0;

uint8_t mod_state;
uint8_t oneshot_mod_state;

void process_repeat_key(uint16_t keycode, const keyrecord_t *record) {
    if (keycode != REPEAT) {
        // Early return when holding down a pure layer key
        // to retain modifiers
        switch (keycode) {
            case QK_DEF_LAYER ... QK_DEF_LAYER_MAX:
            case QK_MOMENTARY ... QK_MOMENTARY_MAX:
            case QK_LAYER_MOD ... QK_LAYER_MOD_MAX:
            case QK_ONE_SHOT_LAYER ... QK_ONE_SHOT_LAYER_MAX:
            case QK_TOGGLE_LAYER ... QK_TOGGLE_LAYER_MAX:
            case QK_TO ... QK_TO_MAX:
            case QK_LAYER_TAP_TOGGLE ... QK_LAYER_TAP_TOGGLE_MAX:
            case LT_BSPC:
            case KC_BSPC:
                return;
        }
        last_modifier = oneshot_mod_state > mod_state ? oneshot_mod_state : mod_state;
        switch (keycode) {
            case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
            case QK_MOD_TAP ... QK_MOD_TAP_MAX:
                if (record->event.pressed) {
                    last_keycode = GET_TAP_KC(keycode);
                }
                break;
            default:
                if (record->event.pressed) {
                    last_keycode = keycode;
                }
                break;
        }
    } else { // keycode == REPEAT
        if (record->event.pressed) {
            register_mods(last_modifier);
            register_code16(last_keycode);
        } else {
            unregister_code16(last_keycode);
            unregister_mods(last_modifier);
        }
    }
}

oneshot_state os_shft_state = os_up_unqueued;
oneshot_state os_ctrl_state = os_up_unqueued;
oneshot_state os_alt_state = os_up_unqueued;
oneshot_state os_lalt_state = os_up_unqueued;
oneshot_state os_cmd_state = os_up_unqueued;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    bool    return_state = true;
    mod_state   = get_mods();
    oneshot_mod_state = get_oneshot_mods();

    bool is_shifted = (mod_state & MOD_MASK_SHIFT) || (oneshot_mod_state & MOD_MASK_SHIFT);

    process_repeat_key(keycode, record);

    update_oneshot(&os_shft_state, KC_LSFT, OS_SHFT, keycode, record);
    update_oneshot(&os_ctrl_state, KC_LCTL, OS_CTRL, keycode, record);
    update_oneshot(&os_alt_state, KC_RALT, OS_ALT, keycode, record);
    update_oneshot(&os_lalt_state, KC_LALT, OS_LALT, keycode, record);
    update_oneshot(&os_cmd_state, KC_LCMD, OS_CMD, keycode, record);

    if (!process_caps_word(keycode, record)) {
        return false;
    }
    if (!process_adaptive_key(keycode, record)) {
        return false;
    }

    if (record->event.pressed) {
        switch (keycode) {
            case MY_MINS:
                if (is_shifted) {
                    clear_mods();
                    clear_oneshot_mods();
                    tap_code16(DK_PLUS);
                    set_mods(mod_state);
                    set_oneshot_mods(oneshot_mod_state);
                } else {
                    tap_code(KC_SLSH);
                }
                return_state = false;
                break;
            case MY_SLSH:
                if (is_shifted) {
                    clear_mods();
                    clear_oneshot_mods();
                    tap_code16(DK_ASTR);
                    set_mods(mod_state);
                    set_oneshot_mods(oneshot_mod_state);
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
            case KC_CAPS:
                caps_word_set(true);
                return_state = false;  // don't do more with this record.
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
                    case KC_LPRN:  //
                        tap_code16(KC_RPRN);
                        tap_code16(KC_LEFT);
                        break;
                    case KC_LBRC:  //
                        tap_code16(KC_RBRC);
                        tap_code16(KC_LEFT);
                        break;
                    case KC_LCBR:  //
                        tap_code16(KC_RCBR);
                        tap_code16(KC_LEFT);
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

// Encoder setup
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code_delay(KC_VOLU, 05);
        } else {
            tap_code_delay(KC_VOLD, 05);
        }
    }
    return false;
}

// Key overrides
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

#if defined(COMBO_ENABLE)
#    include "g/keymap_combo.h"  // to make combo def dictionary work
#endif

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  // debug_enable=true;
  // debug_matrix=true;
  // debug_keyboard=true;
  // debug_mouse=true;
}
