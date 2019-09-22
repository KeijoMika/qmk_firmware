#pragma once

// dynamic macro keys
#define DM_PLAY DYN_MACRO_PLAY1
#define DM_STRT DYN_REC_START1
#define DM_STOP DYN_REC_STOP

// one-shot layer keys
#define OSL_RSE OSL(RSE)
#define OSL_LWR OSL(LWR)
#define OSL_FUN OSL(FUN)

// one-shot modifier keys
#define OSMLCTL OSM(MOD_LCTL)
#define OSMRCTL OSM(MOD_RCTL)
#define OSMLALT OSM(MOD_LALT)
#define OSMRALT OSM(MOD_RALT)
#define OSMLSFT OSM(MOD_LSFT)
#define OSMRSFT OSM(MOD_RSFT)

// mod-tap keys
#define MT_SPC  SFT_T(KC_SPC)

#ifdef KEYBOARD_planck_light
    #define LGT_TOG RGB_TOG
    #define LGT_MOD RGB_MOD
#else
    #define LGT_TOG BL_TOGG
    #define LGT_MOD BL_STEP
#endif

