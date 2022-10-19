#pragma once

#include QMK_KEYBOARD_H

// #include "features/caps_word.h"
#include "features/adaptive_keys.h"
#include "features/oneshot.h"
#include "features/achordion.h"

enum layers {
    _BASE,
    _NUM,
    _NAVR,
    _SYM,
    _MOUR,
    _SPEC,
};

#define LT_R LT(_NAVR, KC_R)
#define LT_U LT(_NUM, KC_U)
#define LT_F LT(_SPEC, KC_F)
#define LT_ENT LT(_SYM, KC_ENT)

#define UC_CUT C(KC_X)
#define UC_CPY C(KC_C)
#define UC_PST C(KC_V)
#define UC_UND C(KC_Z)
#define UC_RDO S(C(KC_Z))

#define DK_LT KC_NUBS
#define DK_GT S(DK_LT)
#define DK_PLUS KC_MINS
#define DK_EQL S(KC_0)
#define DK_QUES S(DK_PLUS)
#define DK_AMPR S(KC_6)
#define DK_DLLR ALGR(KC_4)
#define DK_BAR ALGR(KC_EQL)

#define DK_BSLS ALGR(DK_LT)
#define DK_DQT KC_AT
#define DK_SQT KC_BSLS
#define DK_ASTR S(DK_SQT)
#define DK_COLN KC_GT
#define DK_SCOLN KC_LT
#define DK_AT ALGR(KC_2)
#define DK_TICK KC_EQL
#define DK_UMLAUT KC_RBRC
#define DK_UNDS S(KC_SLSH)

enum tap_dance_keycodes {
    TD_DIAM = 0,
    TD_ARROW,
    TD_RESET,
};

enum custom_keycodes {
    DK_CIRC = CHARYBDIS_SAFE_RANGE,
    AM_END,
    REPEAT,
    OS_SHFT,
    OS_CTRL,
    OS_ALT,
    OS_LALT,
    OS_CMD,

    MY_SLSH,
    MY_MINS,
};

#define DRAG DRAGSCROLL_MODE
#define SNIPE SNIPING_MODE
#define DPI POINTER_DEFAULT_DPI_FORWARD
#define SDPI POINTER_SNIPING_DPI_FORWARD

#define ARROWS TD(TD_ARROW)
#define DIAMS TD(TD_DIAM)
#define SAFE_RST TD(TD_RESET)

#define DK_TILDE ALGR(KC_RBRC)
#define DK_LPRN S(KC_8)
#define DK_RPRN S(KC_9)
#define DK_LBKT ALGR(KC_8)
#define DK_RBKT ALGR(KC_9)
#define DK_LBRC ALGR(KC_7)
#define DK_RBRC ALGR(KC_0)

#define DK_AE KC_SCLN
#define DK_OE KC_QUOT
#define DK_AA KC_LBRC

#define MT_A LSFT_T(KC_A)
#define MT_E LCTL_T(KC_E)
#define MT_I LCMD_T(KC_I)
#define MT_H LALT_T(KC_H)

#define MT_T LSFT_T(KC_T)
#define MT_N LCTL_T(KC_N)
#define MT_S LCMD_T(KC_S)
#define MT_C LALT_T(KC_C)
