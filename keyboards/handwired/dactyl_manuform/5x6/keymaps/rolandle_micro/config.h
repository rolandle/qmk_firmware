/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
*/

#pragma once
#define MASTER_RIGHT
// #define MASTER_LEFT

// Wire up the serial communication to D2 instead of D0.
// And then wire up SDA to D1, and SCL to D0 (from the OLED).
#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN D2

//#define EE_HANDS
