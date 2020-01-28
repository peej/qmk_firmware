/*
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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    /u/peejeh
#define PRODUCT         Split Infinitive
#define DESCRIPTION     QMK keyboard firmware for the Split Infinitive PCB

//#define IS_SPLIT

/* key matrix size */
#ifdef IS_SPLIT
    #define MATRIX_ROWS 10
    #define MATRIX_COLS 6
    #define MATRIX_ROW_PINS { F4, F5, B5, B4, E6 }
    #define MATRIX_COL_PINS { B3, B2, B6, D4, C6, D7 }
    #define UNUSED_PINS { D0, D1, D2, B1, F7, F6 }
    #define SOFT_SERIAL_PIN D3
#else
    #define MATRIX_ROWS 5
    #define MATRIX_COLS 12
    #define MATRIX_ROW_PINS { F4, F5, B5, B4, E6 }
    #define MATRIX_COL_PINS { B3, B2, B6, D4, C6, D7, D2, D1, D0, B1, F7, F6 }
    #define UNUSED_PINS { D3 }
#endif


/* COL2ROW, ROW2COL, or CUSTOM_MATRIX */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
