#ifndef __SOFTWARE_SERIAL_H__
#define __SOFTWARE_SERIAL_H__

#include <stdint.h>
#include <iostream>

class SoftwareSerial {
	public:

	uint8_t receivePin;
	uint8_t transmitPin;
	long speed;

	SoftwareSerial(uint8_t receivePin, uint8_t transmitPin) : speed(0) {
		this->receivePin = receivePin;
		this->transmitPin = transmitPin;
	}

	void begin(long speed) {
		this->speed = speed;
		std::cout << "[] SWSerial (" << (int)receivePin << ", " << (int)transmitPin << ") begin speed " << speed << std::endl;
	}

	int available() {
		std::cout << "[] SWSerial (" << (int)receivePin << ", " << (int)transmitPin << ") available" << std::endl;
		return 0;
	}

	int read() {
		std::cout << "[] SWSerial (" << (int)receivePin << ", " << (int)transmitPin << ") read" << std::endl;
		return 0;
	}
};

#endif
