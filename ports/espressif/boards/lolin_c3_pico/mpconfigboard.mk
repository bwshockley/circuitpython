CIRCUITPY_CREATOR_ID =  0x19881988
CIRCUITPY_CREATION_ID = 0x00C30002

IDF_TARGET = esp32c3

CIRCUITPY_ESP_FLASH_MODE=qio
CIRCUITPY_ESP_FLASH_FREQ=80m
CIRCUITPY_ESP_FLASH_SIZE=4MB

# Override partition layout to preserve compatibility because the default has changed.
FLASH_SIZE_SDKCONFIG = esp-idf-config/sdkconfig-flash-4MB-no-uf2.defaults
CIRCUITPY_DUALBANK = 1
CIRCUITPY_BLEIO = 0

CIRCUITPY_ESP_USB_SERIAL_JTAG = 1

# Include these Python libraries in firmware.
FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_NeoPixel
