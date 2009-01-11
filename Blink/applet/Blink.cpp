/*
 * Blink
 *
 * The basic Arduino example.  Turns on an LED on for one second,
 * then off for one second, and so on...  We use pin 13 because,
 * depending on your Arduino board, it has either a built-in LED
 * or a built-in resistor so that you need only an LED.
 *
 * http://www.arduino.cc/en/Tutorial/Blink
 */

#include "WProgram.h"
void setup();
void loop();
int ledPin1 = 1;               // LED connected to digital pin 13
int ledPin2 = 2;
int ledPin3 = 3;
int ledPin4 = 4;
int ledPin5 = 5;
int ledPin6 = 6;
int ledPin7 = 7;
int ledPin8 = 8;
int ledPin9 = 9;

int val = 0;

int delayTime = 250;

void setup()                    // run once, when the sketch starts
{
  pinMode(ledPin1, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(10, INPUT);
}

void loop()                     // run over and over again
{
  val = digitalRead(10);
  if (val == HIGH) {
  digitalWrite(ledPin1, HIGH);  // waits for a second
  delay(delayTime);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(delayTime);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  delay(delayTime);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  delay(delayTime);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  delay(delayTime);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, HIGH);
  delay(delayTime);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, HIGH);
  delay(delayTime);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);
  delay(delayTime);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  delay(delayTime);
  digitalWrite(ledPin9, LOW);
  }
}

int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

