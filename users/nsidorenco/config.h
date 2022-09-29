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

#define USE_I2C
#define EE_HANDS

// Commands per tick on encoder
#define ENCODER_RESOLUTION 4

#define TAPPING_TERM 180
#define HOLD_ON_OTHER_PRESS
#define IGNORE_MOD_TAP_INTERRUPT

#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

#define COMBO_STRICT_TIMER
#define EXTRA_SHORT_COMBOS
#define COMBO_TERM (TAPPING_TERM/6) // time to get all combo keys down
#define COMBO_HOLD (COMBO_TERM*1.4) // time to hold to trigger delayed combo

#define ADAPTIVE_TERM COMBO_HOLD

#define LINGER_TIME TAPPING_TERM * 1.4
