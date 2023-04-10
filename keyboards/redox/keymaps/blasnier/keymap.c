#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _COLEMAK 0
#define _CODE 1
#define _GAME 2
#define _SYMB 3
#define _NAV 4
#define _ADJUST 5

enum custom_keycodes {
  BAZ_BLD = SAFE_RANGE,
  BAZ_QRY,
  BAZ_TST,
  CD_UP,
  EXA,
  EXA_L,
  GIT_CHEC,
  GIT_FET,
  GIT_PUL,
  GIT_PUS,
  GIT_STAT,
  RARROW,
  RDARROW,
  SHRUG,
  THRE_DOT
};

// Shortcut to make keymap more readable
#define WIN_TERM G(KC_GRV)

#define CODE_L OSL(_CODE)
#define GAME_L TG(_GAME)
#define SYMB_L OSL(3)
#define ADJUST_L OSL(_ADJUST)
#define NAV_L TT(_NAV)

#define RECORD LALT(KC_F10) // record with nVidia
#define SCRSHOT LALT(KC_F1) // screenshot with nVidia
#define STEAM LSFT(KC_TAB) // Open Steam overlay
#define UPLAY LSFT(KC_F2) // Open Uplay overlay

enum unicode_names {
   ACIR,
   S_ACIR,
   AGRV,
   S_AGRV,
   BOXBOTTOMLEFT,
   BOXBOTTOMRIGHT,
   BOXINTER,
   BOXLEVEL,
   BOXLINE,
   BOXTOPLEFT,
   BOXTOPRIGHT,
   CCED,
   S_CCED,
   CHECKMARK,
   CHECKMARK_BIS,
   COPYRIGHT,
   CROSS,
   DEGREE,
   ECIR,
   S_ECIR,
   ECUT,
   S_ECUT,
   EDIA,
   S_EDIA,
   EGRV,
   S_EGRV,
   EM_DASH,
   EN_DASH,
   EYES,
   HERB,
   IDIA,
   S_IDIA,
   ICIR,
   S_ICIR,
   LAQUO,
   // LDQUO,
   LSQUO,
   MU,
   OE,
   S_OE,
   OCIR,
   S_OCIR,
   RAQUO,
   // RDQUO,
   RSQUO,
   SUP_1,
   SUP_2,
   SUP_3,
   THUMB_UP,
   TRADEMARK,
   UCIR,
   S_UCIR,
   UDIA,
   S_UDIA,
   UGRV,
   S_UGRV,
   WASTE_BASKET
};

const uint32_t PROGMEM unicode_map[] = {
   [ACIR] = 0xE2,
   [S_ACIR] = 0xC2,
   [AGRV] = 0xE0,
   [S_AGRV] = 0xC0,
   [BOXBOTTOMLEFT] = 0x2514,
   [BOXBOTTOMRIGHT] = 0x2518,
   [BOXINTER] = 0x251C,
   [BOXLEVEL] = 0x2500,
   [BOXLINE] = 0x2502,
   [BOXTOPLEFT] = 0x250C,
   [BOXTOPRIGHT] = 0x2510,
   [CCED] = 0xE7,
   [S_CCED] = 0xC7,
   [CHECKMARK] = 0x2713,
   [CHECKMARK_BIS] = 0x2705,
   [COPYRIGHT] = 0xA9,
   [CROSS] = 0x274C,
   [ECIR] = 0xEA,
   [S_ECIR] = 0xCA,
   [ECUT] = 0xE9,
   [S_ECUT] = 0xC9,
   [EDIA] = 0xEB,
   [S_EDIA] = 0xCB,
   [EGRV] = 0xE8,
   [S_EGRV] = 0xC8,
   [EM_DASH] = 0x2014,
   [EN_DASH] = 0x2013,
   [EYES] = 0x1F440,
   [DEGREE] = 0xB0,
   [HERB] = 0x1F33F,
   [ICIR] = 0xEE,
   [S_ICIR] = 0xCE,
   [IDIA] = 0xEF,
   [S_IDIA] = 0xCF,
   [LAQUO] = 0xAB, // French quote
   // [LDQUO] = 0x201C,
   [LSQUO] = 0x2018,
   [MU] = 0xB5,
   [OE] = 0x0153,
   [S_OE] = 0x0152,
   [OCIR] = 0xF4,
   [S_OCIR] = 0xD4,
   [RAQUO] = 0xBB, // French quote
   // [RDQUO] = 0x201D,
   [RSQUO] = 0x2019,
   [SUP_1] = 0xB9,
   [SUP_2] = 0xB2,
   [SUP_3] = 0xB3,
   [THUMB_UP] = 0x1F44D,
   [TRADEMARK] = 0x2122,
   [UCIR] = 0xFB,
   [S_UCIR] = 0xDB,
   [UDIA] = 0xFC,
   [S_UDIA] = 0xDC,
   [UGRV] = 0xF9,
   [S_UGRV] = 0xD9,
   [WASTE_BASKET] = 0x1F5D1,
};

#define KC_ACIR XP(ACIR, S_ACIR)
#define KC_AGRV XP(AGRV, S_AGRV)
#define KC_AQUO XP(LAQUO, RAQUO)
#define K_BXTPLF XP(BOXTOPLEFT, BOXINTER)
#define K_BXTPRG XP(BOXTOPRIGHT, BOXLEVEL)
#define K_BXBTLF X(BOXBOTTOMLEFT)
#define K_BXBTRG XP(BOXBOTTOMRIGHT, BOXLINE)
#define KC_CCED XP(CCED, S_CCED)
#define KC_CHKMK XP(CHECKMARK, CHECKMARK_BIS)
#define KC_COPYR XP(COPYRIGHT, TRADEMARK)
#define KC_CROSS XP(CROSS, WASTE_BASKET)
#define KC_DASH XP(EN_DASH, EM_DASH)
#define KC_ECIR XP(ECIR, S_ECIR)
#define KC_ECUT XP(ECUT, S_ECUT)
#define KC_EDIA XP(EDIA, S_EDIA)
#define KC_EGRV XP(EGRV, S_EGRV)
#define EM_EYES X(EYES)
#define EM_HERB X(HERB)
#define KC_ICIR XP(ICIR, S_ICIR)
#define KC_IDIA XP(IDIA, S_IDIA)
#define KC_MUDEG XP(MU, DEGREE)
#define KC_OE XP(OE, S_OE)
#define KC_OCIR XP(OCIR, S_OCIR)
#define KC_SQUO XP(RSQUO, LSQUO)
#define KC_SUP1 X(SUP_1)
#define KC_SUP2 X(SUP_2)
#define KC_SUP3 X(SUP_3)
#define EM_THUP X(THUMB_UP)
#define KC_UCIR XP(UCIR, S_UCIR)
#define KC_UDIA XP(UDIA, S_UDIA)
#define KC_UGRV XP(UGRV, S_UGRV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [_COLEMAK] = LAYOUT(
   //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_ESC  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                            KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_BSPC ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TAB  ,KC_Q    ,KC_W    ,KC_F    ,KC_P    ,KC_G    ,KC_DEL  ,                          GAME_L  ,KC_J    ,KC_L    ,KC_U    ,KC_Y    ,KC_SCLN ,KC_MINS ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LSPO ,KC_A    ,KC_R    ,KC_S    ,KC_T    ,KC_D    ,KC_SQUO ,                          KC_QUOT ,KC_H    ,KC_N    ,KC_E    ,KC_I    ,KC_O    ,KC_RSPC ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LCTL ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,KC_LBRC ,ADJUST_L,        WIN_TERM,KC_RBRC ,KC_K    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RCTL ,
   //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
      _______ ,KC_PAUS ,KC_SLCK ,KC_LGUI ,     CODE_L  ,    KC_SPC  ,KC_LALT ,        SYMB_L  ,KC_ENT  ,    KC_LALT ,     NAV_L   ,XXXXXXX ,KC_PSCR ,CODE_L
   //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
   ),
   [_CODE] = LAYOUT(
   //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
      XXXXXXX ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                            KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,C(KC_W) ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      C(KC_G) ,XXXXXXX ,CD_UP   ,GIT_FET ,GIT_PUL ,GIT_PUS ,A(KC_D) ,                          XXXXXXX ,BAZ_BLD ,EXA     ,EXA_L   ,XXXXXXX ,KC_F11  ,KC_F12  ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      _______ ,C(KC_A) ,A(KC_B) ,C(KC_X) ,A(KC_F) ,C(KC_E) ,XXXXXXX ,                          XXXXXXX ,BAZ_TST ,K_BXTPLF,K_BXTPRG,RDARROW ,RARROW  ,_______ ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      _______ ,XXXXXXX ,XXXXXXX ,GIT_CHEC,XXXXXXX ,XXXXXXX ,KC_LT   ,XXXXXXX ,        XXXXXXX ,KC_GT   ,BAZ_QRY ,K_BXBTLF,K_BXBTRG,THRE_DOT,XXXXXXX ,_______ ,
   //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
      XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,     _______ ,    XXXXXXX ,_______ ,        XXXXXXX ,XXXXXXX ,    _______ ,     XXXXXXX ,XXXXXXX ,XXXXXXX ,_______
   //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
   ),
   [_GAME] = LAYOUT(
   //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_GRV  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                            KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,RECORD  ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_T    ,KC_MINS ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_6    ,                          _______ ,KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,SCRSHOT ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_ESC ,KC_LSFT  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_LBRC ,                          KC_PAUS ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,KC_CAPS ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_G    ,KC_LCTL ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,STEAM   ,UPLAY   ,        XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
   //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
      KC_B    ,KC_TAB  ,KC_ENT  ,KC_BSPC ,     KC_LALT ,    KC_SPC  ,KC_DEL  ,        KC_SLCK ,XXXXXXX ,    KC_LGUI ,     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX
   //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
   ),
   [_SYMB] = LAYOUT(
   //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
      XXXXXXX ,KC_SUP1 ,KC_SUP2 ,KC_SUP3 ,KC_CHKMK,KC_CROSS,                                            EM_THUP ,EM_EYES ,SHRUG   ,EM_HERB ,XXXXXXX ,_______ ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_CAPS ,KC_ACIR ,KC_QUES ,KC_EXLM ,KC_PLUS ,KC_PERC ,_______ ,                          XXXXXXX ,KC_COPYR,KC_EDIA ,KC_UCIR ,KC_UGRV ,KC_UDIA ,KC_DASH ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      _______ ,KC_AGRV ,KC_AMPR ,KC_PIPE ,KC_BSLS ,KC_DLR  ,KC_GRV  ,                          KC_AQUO ,KC_ECIR ,KC_EGRV ,KC_ECUT ,KC_ICIR ,KC_OCIR ,_______ ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      _______ ,KC_AT   ,KC_HASH ,KC_CCED ,KC_EQL  ,KC_ASTR ,KC_LT   ,XXXXXXX ,        XXXXXXX ,KC_GT   ,XXXXXXX ,KC_MUDEG,XXXXXXX ,KC_IDIA ,KC_OE   ,_______ ,
   //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
      XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,     XXXXXXX ,    KC_UNDS ,_______ ,        _______ ,XXXXXXX ,    _______ ,     XXXXXXX ,XXXXXXX ,KC_F13  ,XXXXXXX 
   //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
   ),
   [_NAV] = LAYOUT(
   //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
      XXXXXXX ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                            KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,_______ ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      XXXXXXX ,XXXXXXX ,KC_PGUP ,KC_UP   ,KC_PGDN ,XXXXXXX ,_______ ,                          XXXXXXX ,XXXXXXX ,KC_P7   ,KC_P8   ,KC_P9   ,KC_PSLS ,XXXXXXX ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      _______ ,KC_HOME ,KC_LEFT ,KC_DOWN ,KC_RGHT ,KC_END  ,XXXXXXX ,                          XXXXXXX ,XXXXXXX ,KC_P4   ,KC_P5   ,KC_P6   ,KC_PAST ,_______ ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      _______ ,KC_INS  ,KC_PSCR ,KC_SLCK ,KC_PAUS ,KC_NLCK ,KC_APP  ,XXXXXXX ,        XXXXXXX ,XXXXXXX ,XXXXXXX ,KC_P1   ,KC_P2   ,KC_P3   ,KC_PMNS ,_______ ,
   //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
      XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,     XXXXXXX ,    XXXXXXX ,_______ ,        XXXXXXX ,XXXXXXX ,    _______ ,     _______ ,KC_P0   ,KC_PPLS ,XXXXXXX 
   //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
   ),
   [_ADJUST] = LAYOUT(
   //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
      XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,                                            XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      XXXXXXX ,XXXXXXX ,KC_VOLD ,KC_MPLY ,KC_VOLU ,KC_MUTE ,KC_SLCK ,                          XXXXXXX ,RESET   ,RGB_TOG ,XXXXXXX ,RGB_RMOD,RGB_MOD ,XXXXXXX ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      XXXXXXX ,XXXXXXX ,KC_MPRV ,KC_MSTP ,KC_MNXT ,XXXXXXX ,KC_PAUS ,                          XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,RGB_HUD ,RGB_HUI ,XXXXXXX ,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,        XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,RGB_SAD ,RGB_SAI ,XXXXXXX ,
   //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
      XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,     XXXXXXX ,    XXXXXXX ,XXXXXXX ,        XXXXXXX ,XXXXXXX ,    XXXXXXX ,     XXXXXXX ,RGB_VAD ,RGB_VAI ,XXXXXXX
   //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
   )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
   switch(keycode) {
      case BAZ_BLD:
         if (record->event.pressed) {
         SEND_STRING("bazel build ");
         }
      break;
      case BAZ_QRY:
         if (record->event.pressed) {
         SEND_STRING("bazel query ");
         }
      break;
      case BAZ_TST:
         if (record->event.pressed) {
         SEND_STRING("bazel test ");
         }
      break;
      case CD_UP:
         if (record->event.pressed) {
         SEND_STRING("cd ..\n");
         }
      break;
      case EXA:
         if (record->event.pressed) {
         SEND_STRING("exa ");
         }
      break;
      case EXA_L:
         if (record->event.pressed) {
         SEND_STRING("exa -l ");
         }
      break;
      case GIT_CHEC:
         if (record->event.pressed) {
            SEND_STRING("git checkout ");
         }
      break;
      case GIT_FET:
         if (record->event.pressed) {
         SEND_STRING("git fetch ");
         }
      break;
      case GIT_PUL:
         if (record->event.pressed) {
         SEND_STRING("git pull ");
         }
      break;
      case GIT_PUS:
         if (record->event.pressed) {
         SEND_STRING("git push ");
         }
      break;
      case RARROW:
         if (record->event.pressed) {
         SEND_STRING("->");
         }
      break;
      case RDARROW:
         if (record->event.pressed) {
         SEND_STRING("=>");
         }
      break;
      case SHRUG:
         if (record->event.pressed) {
            send_unicode_hex_string("00AF 005C 005F 0028 30C4 0029 005F 002F 00AF");
         }
         break;
      case THRE_DOT:
         if (record->event.pressed) {
         SEND_STRING("...");
         }
      break;
   }
   return true;
}

void eeconfig_init_user(void) {
    set_unicode_input_mode(UC_WINC);
}