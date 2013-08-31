#ifndef __AFMOTOR_H__
#define __AFMOTOR_H__

#include <stdint.h>
#include <iostream>

#define FORWARD 1
#define BACKWARD 2
#define BRAKE 3
#define RELEASE 4

class AF_DCMotor {
	public:

	uint8_t motornum;
	uint8_t speed;
	uint8_t cmd;

	AF_DCMotor(uint8_t motornum) : speed(0), cmd(0) {
		this->motornum = motornum;
	}

	void run(uint8_t cmd) {
		this->cmd = cmd;
		std::cout << "[] Motor " << (int)motornum << " cmd " << (int)cmd << std::endl;
	}

	void setSpeed(uint8_t speed) {
		this->speed = speed;
		std::cout << "[] Motor " << (int)motornum << " speed " << (int)speed << std::endl;
	}
};

#endif
