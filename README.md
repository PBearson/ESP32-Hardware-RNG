# ESP32 Hardware RNG

According to the [ESP32 Technical Reference Manual](https://www.espressif.com/sites/default/files/documentation/esp32_technical_reference_manual_en.pdf), the ESP32's true random number generator writes 32-bit values to the RNG\_DATA\_REG register, whose address is 0x3FF75144. This code samples the TRNG by reading from this address every second.
