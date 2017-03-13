# HT16K33

*Particle Library for the HT16K33 chip and several boards based on it*

Particle library to control HT16K33 chip, supports connection via any hardware I2C.

Additional classes to support:

  1. [Adafruit 14-Segment Alphanumeric LED FeatherWing](https://www.adafruit.com/products/3089)
      Adafruit_AlphaNum_4

  2. [Adafruit 16x8 LED Matrix Driver Backpack](https://www.adafruit.com/products/1427)
      is planned

  3. [Adafruit 8x16 LED Matrix FeatherWing](https://www.adafruit.com/products/3090)
      is planned

  4. [Adafruit 4-Digit 7-Segment LED Matrix Display FeatherWing](https://www.adafruit.com/products/3088)
      is planned

## Usage

Connect any HT16K33 hardware, add the HT16K33 library to your project and follow this simple example:

```
Adafruit_AlphaNum_4 display(0x70, Wire);

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
```

See the [examples](examples) folder for more details.

## Contributing

Here's how you can make changes to this library and eventually contribute those changes back.

To get started, [clone the library from GitHub to your local machine](https://help.github.com/articles/cloning-a-repository/).

Change the name of the library in `library.properties` to something different. You can add your name at then end.

Modify the sources in <src> and <examples> with the new behavior.

To compile an example, use `particle compile examples/usage` command in [Particle CLI](https://docs.particle.io/guide/tools-and-features/cli#update-your-device-remotely) or use our [Desktop IDE](https://docs.particle.io/guide/tools-and-features/dev/#compiling-code).

After your changes are done you can upload them with `particle library upload` or `Upload` command in the IDE. This will create a private (only visible by you) library that you can use in other projects. Do `particle library add NeoRingDsp_myname` to add the library to a project on your machine or add the NeoRingDsp_myname library to a project on the Web IDE or Desktop IDE.

At this point, you can create a [GitHub pull request](https://help.github.com/articles/about-pull-requests/) with your changes to the original library.

If you wish to make your library public, use `particle library publish` or `Publish` command.

## LICENSE
Copyright (C) 2014 Alik <aliktab@gmail.com> All rights reserved.

This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation; either version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along with this library; if not, write to the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
