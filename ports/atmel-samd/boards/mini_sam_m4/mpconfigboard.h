// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#pragma once

#define MICROPY_HW_BOARD_NAME "Mini SAM M4"
#define MICROPY_HW_MCU_NAME "samd51g19"

#define CIRCUITPY_MCU_FAMILY samd51

#define MICROPY_HW_LED_STATUS   (&pin_PA15)

// RGB Status LED Pins
#define MICROPY_HW_APA102_MOSI   (&pin_PB03)
#define MICROPY_HW_APA102_SCK    (&pin_PB02)

#define DEFAULT_I2C_BUS_SCL (&pin_PA13)
#define DEFAULT_I2C_BUS_SDA (&pin_PA12)

#define DEFAULT_SPI_BUS_SCK (&pin_PA01)
#define DEFAULT_SPI_BUS_MOSI (&pin_PB22)
#define DEFAULT_SPI_BUS_MISO (&pin_PB23)

#define DEFAULT_UART_BUS_RX (&pin_PA16)
#define DEFAULT_UART_BUS_TX (&pin_PA17)

// USB is always used internally so skip the pin objects for it.
#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1
