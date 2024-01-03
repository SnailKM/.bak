// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include "config_common.h"

/* bootmagic */
#define BOOTMAGIC_LITE_ROW 1
#define BOOTMAGIC_LITE_COLUMN 0

/* rgb underglow */
#define RGB_DI_PIN E6
#define RGBLED_NUM 10

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { B1, B3, B2 }
#define MATRIX_COL_PINS { F4, F5, F6, F7 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* encoders */
#define ENCODERS_PAD_A { B4 }
#define ENCODERS_PAD_B { B5 } 

/* misc */
#define LAYER_STATE_8BIT
#define NO_ACTION_TAPPING
