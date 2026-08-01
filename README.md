# ESP32-register-level-gpio-driver
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
```

## Future Improvements

- [ ] Add GPIO input support (button reading)
- [ ] Implement configurable pull-up and pull-down resistors
- [ ] Support all GPIO pins using a generic IO_MUX configuration
- [ ] Create separate `gpio.c` and `gpio.h` driver files
- [ ] Add GPIO toggle function (`gpio_toggle()`)
- [ ] Add GPIO read function (`gpio_read()`)
- [ ] Replace software delay loops with a hardware Timer driver
- [ ] Support Timer interrupt-based LED blinking
- [ ] Develop a register-level UART driver for serial communication
- [ ] Add interrupt support for GPIO (button interrupt)
- [ ] Build SPI and I²C register-level drivers
- [ ] Add error handling and parameter validation
- [ ] Create example applications demonstrating each driver feature
- [ ] Port the driver to another microcontroller (STM32) for comparison
- [ ] Improve code portability using reusable register definitions
