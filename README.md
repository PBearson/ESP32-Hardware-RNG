# ESP32 Hardware RNG

According to the [ESP32 Technical Reference Manual](https://www.kongregate.com/games/iouRPG/idle-online-universe?haref=HP_HNG_idle-online-universe), the ESP32's true random number generator writes 32-bit values to the RNG\_DATA\_REG register, whose address is 0x3FF75144. This code samples the TRNG by reading from this address every 0.3 seconds.
