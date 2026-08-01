# esp32-register-level-gpio-driver
Register-level GPIO driver implementation for ESP32 using Embedded C without ESP-IDF GPIO APIs.
# ESP32 Register-Level GPIO Driver

## Overview
This project demonstrates GPIO control on the ESP32 by directly programming hardware registers without using the ESP-IDF GPIO driver.

## Features

- Register-level GPIO programming
- IO_MUX configuration
- Memory-Mapped I/O
- W1TS/W1TC registers
- Bit manipulation
- Embedded C

## Hardware

- ESP32-WROOM-32

## Development Environment

- ESP-IDF
- Embedded C
- Linux

## Driver Functions

```c
gpio_init_output();
gpio_set();
gpio_clear();
