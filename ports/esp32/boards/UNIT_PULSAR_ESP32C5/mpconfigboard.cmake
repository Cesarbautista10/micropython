include(boards/mpconfigboard_esp32c5_common.cmake)

# Use the board's 80 MHz flash configuration.
list(APPEND SDKCONFIG_DEFAULTS
    boards/sdkconfig.flash_qio_80m)
