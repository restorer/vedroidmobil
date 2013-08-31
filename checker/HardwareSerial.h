#ifndef __SERIAL_H__
#define __SERIAL_H__

#include <stdint.h>
#include <iostream>

class HardwareSerial {
	public:

	uint16_t baud;

	HardwareSerial() : baud(0) {
	}

	void begin(uint16_t baud) {
		this->baud = baud;
		std::cout << "[] HWSerial baud " << (int)baud << std::endl;
	}

	void print(int value) {
		std::cout << value;
	}

	void println(int value) {
		std::cout << value << std::endl;
	}

	void print(const char * value) {
		std::cout << value;
	}

	void println(const char * value) {
		std::cout << value << std::endl;
	}
};

#endif
