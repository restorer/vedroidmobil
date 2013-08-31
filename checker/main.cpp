#include <iostream>

#include "Arduino.h"
#include "HardwareSerial.h"

HardwareSerial Serial;

#include "../source/vedroidmobil.ino"

int main(int argc, char** argv) {
	std::cout << "[[ setup ]]" << std::endl;
	setup();

	std::cout << "[[ loop ]]" << std::endl;
	loop();

	std::cout << "[[ done ]]" << std::endl;
	return 0;
}
