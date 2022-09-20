// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define MATRIX_COL_PINS \
    { GP28 , GP7 , GP8 , GP9 , GP10 }
#define MATRIX_ROW_PINS \
    { GP2  , GP3 , GP4 , GP5 , GP6  }
#define DEBUG_MATRIX_SCAN_RATE

#define QMK_WAITING_TEST_BUSY_PIN GP8
#define QMK_WAITING_TEST_YIELD_PIN GP9

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define RGB_DI_PIN GP20
#define RGBLED_NUM 22
#define DRIVER_LED_TOTAL 22
#define NOP_FUDGE 0.2

#define ENCODERS_PAD_A { GP18, GP0, GP26 }
#define ENCODERS_PAD_B { GP19, GP1, GP27 }

// settings for the oled keyboard demo with Adafruit 0.91" OLED display on the Stemma QT port
#define OLED_DISPLAY_128X32
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP12
#define I2C1_SCL_PIN GP13

