# ESP32 Register-Level Peripheral Drivers

A collection of reusable peripheral drivers for the ESP32 developed using **Embedded C** by directly programming the hardware registers instead of using the ESP-IDF peripheral APIs.

The objective of this project is to gain a deep understanding of the ESP32 hardware by implementing peripheral drivers from the ESP32 Technical Reference Manual (TRM).

---

## Features

### GPIO Driver
- Configure GPIO as output
- IO_MUX configuration
- GPIO Enable register configuration
- Write-One-to-Set (W1TS)
- Write-One-to-Clear (W1TC)
- LED blink example

### Timer Driver
- Timer configuration
- Prescaler configuration (80 MHz → 1 MHz)
- Timer reset using LOAD registers
- Counter update using UPDATE register
- Polling-based millisecond delay
- Reusable timer API

---

## Hardware

- ESP32-WROOM-32

---

## Software

- Embedded C
- ESP-IDF
- Linux (Pop!_OS)

---

## Concepts Learned

- Memory-Mapped I/O
- Register-Level Programming
- Embedded C
- Bit Manipulation
- Read-Modify-Write Operations
- GPIO Peripheral
- General Purpose Timer
- Hardware Timers
- Technical Reference Manual (TRM)

---

## APIs Implemented

### GPIO Driver

```c
void gpio_init_output(uint8_t pin);
void gpio_set(uint8_t pin);
void gpio_clear(uint8_t pin);
```

### Timer Driver

```c
void timer_init(void);
void timer_reset(void);
void timer_delay_ms(uint32_t ms);
```

---

## Why This Project?

Most ESP32 examples use high-level ESP-IDF APIs.

This project focuses on understanding the hardware by implementing drivers directly from the ESP32 Technical Reference Manual (TRM), providing insight into how peripherals operate at the register level.

---

## Author

Moneswaran K

Electronics and Communication Engineering (ECE)

Embedded Systems | Embedded C | ESP32 | Firmware Development

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
