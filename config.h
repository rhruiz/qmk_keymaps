#pragma once

#pragma message boom

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

#ifdef CAPS_WORD_ENABLE
#    define CAPS_WORD_INVERT_ON_SHIFT
#endif

#ifdef SPLIT_KEYBOARD
#    define SPLIT_TRANSACTION_IDS_USER USER_SYNC_RUNTIME_STATE, USER_SYNC_BLINK_LED
#    define SPLIT_LAYER_STATE_ENABLE
#    define SPLIT_MODS_ENABLE
#endif

#ifdef OLED_ENABLE
#    ifdef OLED_FONT_H
#        undef OLED_FONT_H
#    endif
#    define OLED_FONT_H RHRUIZ_OLED_FONT_H
#    define OLED_SCROLL_TIMEOUT 8000
#    ifdef OLED_ROTATE
#        define OLED_SCROLL_TIMEOUT_RIGHT
#    endif
#endif

#undef TAPPING_TERM
#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY
#define HOME_ROW_MODS
#define PERMISSIVE_HOLD

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY 0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 64

#include "layouts/keys.h"
