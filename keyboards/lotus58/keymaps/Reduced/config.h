/*
Copyright 2021 TweetyDaBird

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// Encoder support
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }
#define ENCODERS_PAD_A_RIGHT { F4 }
#define ENCODERS_PAD_B_RIGHT { F5 }
#define ENCODER_RESOLUTION 4

// Allows dual displays to show modifiers etc
#define SERIAL_USE_MULTI_TRANSACTION
#define SPLIT_MODS_ENABLE
#define SPLIT_TRANSPORT_MIRROR

// Detects USB and assigns master (Not recommended on Elite C/Pro Micro mix)
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define SPLIT_USB_TIMEOUT_POLL 10

// Used for tapping in keymap
#define TAPPING_TERM 175
#define TAPPING_TOGGLE 2
#define TAP_CODE_DELAY 10

// Basic RGB configuration
// #define RGB_DI_PIN D3
#define RGBLIGHT_SPLIT

// Full backlight + underglow
#ifdef RGBLED_NUM
#undef RGBLED_NUM
#endif
#define RGBLED_NUM 58
// #define RGBLED_NUM 70
#ifdef RGBLED_SPLIT
#undef RGBLED_SPLIT
#endif
#define RGBLED_SPLIT { 29, 29 }
// #define RGBLED_SPLIT { 35, 35 }
// #define RGBLIGHT_DEFAULT_HUE 200
#define RGBLIGHT_DEFAULT_SPD 200
#define RGBLIGHT_SPLIT // synchronises between split boards
#define RGBLIGHT_SLEEP // lights off with host goes to sleep
#define RGBLIGHT_LAYERS_RETAIN_VAL
// #define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #define RGBLIGHT_MODE_RAINBOW_MOOD
#define RGBLIGHT_LIMIT_VAL 120

// Disable depreciated
// #define NO_ACTION_MACRO
// #define NO_ACTION_FUNCTION

//#define NO_AUTO_SHIFT_SPECIAL
//#define NO_AUTO_SHIFT_NUMERIC

// /* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 0

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is useful for the Windows task manager shortcut (ctrl+shift+esc).
 */
#define GRAVE_ESC_CTRL_OVERRIDE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable action features */
// #define NO_ACTION_ONESHOT

/* Bootmagic Lite key configuration */
// #define BOOTMAGIC_LITE_ROW 0
// #define BOOTMAGIC_LITE_COLUMN 0
