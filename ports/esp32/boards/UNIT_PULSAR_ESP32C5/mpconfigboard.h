#define MICROPY_HW_BOARD_NAME   "Pulsar C5 UNIT Electronics"
#define MICROPY_HW_MCU_NAME     "ESP32-C5"


#define MICROPY_PY_MACHINE_I2S              (1)

// REPL is on the native USB Serial/JTAG interface; the hardware UART is left
// free for the application. To put the REPL on UART0, define
// MICROPY_HW_ENABLE_UART_REPL.

#define MICROPY_HW_I2C0_SCL  (3)
#define MICROPY_HW_I2C0_SDA  (2)

#define MICROPY_HW_SPI1_MOSI (7)
#define MICROPY_HW_SPI1_MISO (26)
#define MICROPY_HW_SPI1_SCK  (27)
