/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

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

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define NO_ACTION_ONESHOT
#define LAYER_STATE_8BIT
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

// Commands per tick on encoder
#if defined(ENCODER_ENABLE)
#define ENCODER_RESOLUTION 4
#endif

#define TAPPING_TERM 180
// #define HOLD_ON_OTHER_PRESS
#define IGNORE_MOD_TAP_INTERRUPT

#define COMBO_STRICT_TIMER
#define EXTRA_SHORT_COMBOS
#define COMBO_TERM (TAPPING_TERM/6) // time to get all combo keys down
#define COMBO_HOLD (COMBO_TERM*1.6) // time to hold to trigger delayed combo

#define ADAPTIVE_TERM COMBO_HOLD

#define LINGER_TIME TAPPING_TERM * 1.4
