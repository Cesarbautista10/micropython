// Board definitions for the UNIT Electronics Pulsar ESP32-C5 (Nano form factor).

#define MICROPY_HW_BOARD_NAME               "PulsarC5"
#define MICROPY_HW_MCU_NAME                 "ESP32-C5"

// REPL is on the native USB Serial/JTAG interface (GPIO13/14), so D8/D9 are
// not exposed as GPIO. UART0 (TX=GPIO11, RX=GPIO12) is free for the application.

// Sensor I2C on the Nano header (SDA/SCL).
#define MICROPY_HW_I2C0_SCL                 (3)
#define MICROPY_HW_I2C0_SDA                 (2)

// QWIIC connector.
#define MICROPY_HW_I2C1_SCL                 (6)
#define MICROPY_HW_I2C1_SDA                 (1)

// SPI on the Nano header (D11/D12/D13).
#define MICROPY_HW_SPI1_SCK                 (27)
#define MICROPY_HW_SPI1_MOSI                (7)
#define MICROPY_HW_SPI1_MISO                (26)

// microSD in SPI mode, shares SPI1: machine.SDCard(slot=2).
#define MICROPY_HW_SDCARD_SPI_SCK           (27)
#define MICROPY_HW_SDCARD_SPI_MOSI          (7)
#define MICROPY_HW_SDCARD_SPI_MISO          (26)
#define MICROPY_HW_SDCARD_SPI_CS            (23)

// The onboard ICS-43434 I2S microphone (J20) shares pins with SPI1:
// SCK=GPIO27, WS=GPIO26, SD=GPIO7, CH=GPIO10. It cannot be used at the
// same time as SPI1 or the microSD card.
