EXTRAFLAGS += -flto

INTROSPECTION_KEYMAP_C = nsidorenco.c

# SRC += features/caps_word.c
SRC += features/adaptive_keys.c
# SRC += features/oneshot.c
SRC += features/achordion.c

SPLIT_KEYBOARD = yes

KEY_OVERRIDE_ENABLE = no
TAP_DANCE_ENABLE = yes
COMBO_ENABLE = no
CAPS_WORD_ENABLE = yes
NKRO = yes
LTO_ENABLE = yes
AUTO_SHIFT_ENABLE = no
RGBLIGHT_ENABLE = no
BACKLIGHT_ENABLE = no
BOOTMAGIC_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
AUDIO_ENABLE = no
BLUETOOTH_ENABLE = no
LED_MATRIX_ENABLE = no
