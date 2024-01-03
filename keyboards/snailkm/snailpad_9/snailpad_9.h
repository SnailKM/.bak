// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include "quantum.h"

#define LAYOUT_default( \
	K00, K01, K02, K03, \
	K10, K11, K12, \
	K20, K21, K22  \
) { \
	{ K00,   K01,   K02,   K03, }, \
	{ K10,   K11,   K12,   KC_NO, }, \
	{ K20,   K21,   K22,  KC_NO }  \
}

