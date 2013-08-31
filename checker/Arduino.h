#ifndef __ARDUINO_H__
#define __ARDUINO_H__

#include <stdint.h>

#define LOW 0
#define HIGH 1

#define INPUT 0
#define OUTPUT 1
#define INPUT_PULLUP 2

typedef uint8_t byte;
typedef uint8_t boolean;
typedef uint16_t word;

void pinMode(uint8_t pin, uint8_t mode);
void digitalWrite(uint8_t pin, uint8_t value);
int digitalRead(uint8_t pin);

void delay(unsigned long ms);
void delayMicroseconds(unsigned long us);
unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout=1000000L);

void setup(void);
void loop(void);

#endif
