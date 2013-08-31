#ifndef __SERVO_H__
#define __SERVO_H__

#include <stdint.h>
#include <iostream>

class Servo {
	public:

	int pin;
	int value;

	Servo() : pin(0), value(0) {
	}

	uint8_t attach(int pin) {
		this->pin = pin;
	}

	void write(int value) {
		this->value = value;
		std::cout << "[] Servo " << pin << " value " << value << std::endl;
	}
};

#endif
