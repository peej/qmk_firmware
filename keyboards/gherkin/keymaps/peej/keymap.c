#include "gherkin.h"

#define _______ KC_TRNS

#define _QWERTY 0
#define _LOWER 3
#define _RAISE 5
#define _FUNCT 10

#define SFT_A SFT_T(KC_A)
#define CTL_Z CTL_T(KC_Z)
#define ALT_C ALT_T(KC_C)
#define GUI_V GUI_T(KC_V)
#define LOWER_B LT(_LOWER, KC_B)
#define RAISE_N LT(_RAISE, KC_N)
#define GUI_M RGUI_T(KC_M)
#define ALT_TAB RALT_T(KC_TAB)
#define CTL_ENT RCTL_T(KC_ENT)
#define SFT_SPC RSFT_T(KC_SPC)

#define SFT_1 SFT_T(KC_1)
#define DEL_FUNCT LT(_FUNCT, KC_DEL)
#define SFT_0 RSFT_T(KC_0)

#define SFT_TAB SFT_T(KC_TAB)
#define CTL_BSLS CTL_T(KC_BSLASH)
#define ALT_QUOT ALT_T(KC_QUOTE)
#define GUI_MINS GUI_T(KC_MINS)
#define TAB_FUNCT LT(_FUNCT, KC_TAB)
#define GUI_EQL RGUI_T(KC_EQL)
#define ALT_COMM RALT_T(KC_COMM)
#define CTL_SLSH RCTL_T(KC_SLASH)
#define SFT_BSPC RSFT_T(KC_BSPC)

#define MAC_LOCK LGUI(LSFT(KC_POWER))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-------------------------------------------------------------------------------.
 * |   Q   |   W   |   E   |   R   |   T   |   Y   |   U   |   I   |   O   |   P   |
 * |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   | Space |
 * | Shift |       |       |       |       |       |       |       |       | Shift |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |   Z   |   X   |   C   |   V   |   B   |   N   |   M   |  Tab  |  Esc  | Enter |
 * | Ctrl  |       |  Alt  |  Cmd  | Lower | Raise |  Cmd  |  Alt  |       | Ctrl  |
 * `-------------------------------------------------------------------------------'
 */
[_QWERTY] = KEYMAP(
  KC_Q,  KC_W, KC_E,  KC_R,  KC_T,    KC_Y,    KC_U,  KC_I,    KC_O,    KC_P,
  SFT_A, KC_S, KC_D,  KC_F,  KC_G,    KC_H,    KC_J,  KC_K,    KC_L,    SFT_SPC,
  CTL_Z, KC_X, ALT_C, GUI_V, LOWER_B, RAISE_N, GUI_M, ALT_TAB, KC_GESC, CTL_ENT
),

/* Raise
 * ,-------------------------------------------------------------------------------.
 * |   !   |   @   |   #   |   $   |   %   |   ^   |   &   |   *   |   (   |   )   |
 * |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |   1   |   2   |   3   |   4   |   5   |   6   |   7   |   8   |   9   |   0   |
 * | Shift |       |       |       |       |       |       |       |       | Shift |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |   (   |   [   |   {   |   <   |  Del  |       |   >   |   }   |   ]   |   )   |
 * |       |       |       |       | Funct |       |       |       |       |       |
 * `-------------------------------------------------------------------------------'
 */
[_RAISE] = KEYMAP(
  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
  SFT_1,   KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    SFT_0,
  KC_LPRN, KC_LBRC, KC_LCBR, KC_LABK, DEL_FUNCT, _______, KC_RABK, KC_RCBR, KC_RBRC, KC_RPRN
),

/* Lower
 * ,-------------------------------------------------------------------------------.
 * |  F1   |  F2   |  F3   |  F4   |  F5   |  F6   |  F7   |  F8   |  F9   |  F10  |
 * |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |  Tab  | Home  | PgDn  | PgUp  |  End  | Left  | Down  |  Up   | Right | Bksp  |
 * | Shift |       |       |       |       |       |       |       |       | Shift |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |   \   |   ;   |   '   |   -   |       |  Tab  |   =   |   ,   |   .   |   /   |
 * | Ctrl  |       |  Alt  |  Cmd  |       | Funct |  Cmd  |  Alt  |       | Ctrl  |
 * `-------------------------------------------------------------------------------'
 */
[_LOWER] = KEYMAP(
  KC_F1,    KC_F2,   KC_F3,    KC_F4,    KC_F5,   KC_F6,     KC_F7,   KC_F8,    KC_F9,   KC_F10,
  SFT_TAB,  KC_HOME, KC_PGDN,  KC_PGUP,  KC_END,  KC_LEFT,   KC_DOWN, KC_UP,    KC_RGHT, SFT_BSPC,
  CTL_BSLS, KC_SCLN, ALT_QUOT, GUI_MINS, _______, TAB_FUNCT, GUI_EQL, ALT_COMM, KC_DOT,  CTL_SLSH
),

[_FUNCT] = KEYMAP(
  RESET,   _______, _______, _______, _______, _______, _______, _______, _______, KC_SYSTEM_POWER,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_SYSTEM_SLEEP,
  BL_TOGG, BL_STEP, _______, _______, _______, _______, _______, _______, _______, MAC_LOCK
)

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
