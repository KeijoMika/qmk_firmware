# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = yes      # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
<<<<<<< HEAD
MIDI_ENABLE = no            # MIDI support
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no           # Audio output on port C6
DEBOUNCE_TYPE = sym_eager_pk
=======
AUDIO_ENABLE = no           # Audio output

>>>>>>> upstream
LAYOUTS = 60_ansi 60_ansi_split_bs_rshift 60_ansi_tsangan 60_hhkb 60_iso 60_iso_split_bs_rshift 60_iso_tsangan

DEFAULT_FOLDER = yd60mq/12led
