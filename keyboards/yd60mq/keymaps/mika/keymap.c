#include QMK_KEYBOARD_H

enum yd60mq_layers {
	  _WINKEY,
	  _NOWINKEY,
	  _FL
};

enum yd60mq_keycode {
	WINKEY = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_WINKEY] = LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, _______, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, _______,
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,
		KC_LSFT, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, _______, KC_UP, MO(_FL),
		KC_LCTL, KC_LGUI, KC_LALT, _______, KC_SPC, _______, KC_RALT, KC_LEFT, _______, KC_DOWN, KC_RGHT),

	[_NOWINKEY] = LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, _______, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, _______,
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,
		KC_LSFT, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, _______, KC_UP, MO(_FL),
		KC_LCTL, KC_INS, KC_LALT, _______, KC_SPC, _______, KC_RALT, KC_LEFT, _______, KC_DOWN, KC_RGHT),

	[_FL] = LAYOUT(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______, KC_DEL,
		KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, _______,
		KC_TRNS, BL_TOGG, BL_DEC, BL_INC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, _______, KC_PGUP, KC_TRNS,
		KC_TRNS, WINKEY, KC_TRNS, _______, KC_TRNS, _______, KC_TRNS, KC_HOME, _______, KC_PGDN, KC_END),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case WINKEY:
      if (record->event.pressed) {
		  if (biton32(default_layer_state) == _WINKEY) {
			  set_single_persistent_default_layer(_NOWINKEY);
		  }
		  else if (biton32(default_layer_state) == _NOWINKEY) {
			  set_single_persistent_default_layer(_WINKEY);
		  }
	  }
      return false;
      break;
  }
  return true;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}
