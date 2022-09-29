INTROSPECTION_KEYMAP_C = nsidorenco.c

SRC += features/caps_word.c
SRC += features/adaptive_keys.c
SRC += features/oneshot.c
SRC += features/achordion.c

VPATH += keyboards/gboards

SPLIT_KEYBOARD = yes

AUTO_SHIFT_ENABLE = yes
RGBLIGHT_ENABLE = no
BACKLIGHT_ENABLE = no
LTO_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes
COMBO_ENABLE = yes
NKRO = yes
MOUSEKEY_ENABLE = yes
TAP_DANCE_ENABLE = yes
