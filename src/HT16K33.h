#pragma once

/*
  Based on: https://github.com/adafruit/Adafruit_LED_Backpack

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

// this will load the definition for common Particle variable types
#include <Particle.h>


#define HT16K33_BLINK_OFF       0
#define HT16K33_BLINK_2HZ       1
#define HT16K33_BLINK_1HZ       2
#define HT16K33_BLINK_HALFHZ    3


class HT16K33
{
public:

  enum BlinkMode
  {
    blm_off   = 0,
    blm_2hz   = 1,
    blm_1hz   = 2,
    blm_half  = 3
  };


  // сonstructor: I2C address
  HT16K33(
      uint8_t   _addr = 0x70,
      TwoWire & _i2c  = Wire
    );

  // initialize chip and i2c interface if needed
  void begin();

  void set_brightness(uint8_t _val);

  void set_blink_rate(BlinkMode _val);

  void show_data();

  void clear();

  void write_raw(uint8_t _digit, uint16_t _raw);

protected:

  uint8_t   m_i2c_addr;
  uint16_t  m_buffer[8];

  TwoWire & m_i2c;
};


class Adafruit_AlphaNum_4 : public HT16K33
{
public:

  Adafruit_AlphaNum_4(uint8_t _addr, TwoWire & _i2c);

  void write_char(uint8_t _digit, char _char, bool _dot);

  void write_str(const char * _str);
};




