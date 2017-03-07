/*
  Copyright (C) 2014 Alik <aliktab@gmail.com> All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/

#include "HT16K33.h"
Adafruit_AlphaNum_4 display(0x70);

void setup()
{
  display.begin();

  display.set_brightness(0x7);
  display.set_blink_rate(HT16K33::blm_half);

  display.write_digit_raw(0, 0x0f0f);
  display.write_digit_raw(1, 0xf0f0);
  display.write_digit_raw(2, 0xaaaa);
  display.write_digit_raw(3, 0x5555);

  display.show_data();
}

void loop()
{
}
