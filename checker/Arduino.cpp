#include "Arduino.h"
#include <iostream>

void pinMode(uint8_t pin, uint8_t mode) {
	std::cout << "[] Pin " << (int)pin << " mode " << (int)mode << std::endl;
}

void digitalWrite(uint8_t pin, uint8_t value) {
	std::cout << "[] Pin " << (int)pin << " write " << (int)value << std::endl;
}

int digitalRead(uint8_t pin) {
	std::cout << "[] Pin " << (int)pin << " read" << std::endl;
	return 0;
}

void delay(unsigned long ms) {
	std::cout << "[] Delay " << ms << " ms" << std::endl;
}

void delayMicroseconds(unsigned long us) {
	std::cout << "[] DelayMicroseconds " << us << " us" << std::endl;
}

unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout) {
	std::cout << "[] PulseIn pin " << (int)pin << " state " << (int)state << " timeout " << timeout << std::endl;
}
