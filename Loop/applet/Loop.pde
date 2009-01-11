/*
 * Loop
 * by David A. Mellis
 *
 * Lights multiple LEDs in sequence, then in reverse.  Demonstrates
 * the use of a for() loop and arrays.
 *
 * http://www.arduino.cc/en/Tutorial/Loop
 */

int timer = 50;                   // The higher the number, the slower the timing.
int pins[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // an array of pin numbers
int num_pins = 9;                  // the number of pins (i.e. the length of the array)
int prevPin = 9;
int curPin = 0;

void setup()
{
  int i;
  pinMode(10, INPUT);
  for (i = 0; i < num_pins; i++)   // the array elements are numbered from 0 to num_pins - 1
    pinMode(pins[i], OUTPUT);      // set each pin as an output
}

void loop()
{
  if (digitalRead(10) == HIGH) {
    curPin = (curPin + 1) % num_pins;
    if (curPin == 0) {
      prevPin = 8;
    } else {
      prevPin = curPin - 1;
    }
  } else {
    if (curPin == 0) {
      curPin = 8;
    } else {
      curPin = curPin - 1;
    }
    prevPin = (curPin + 1) % num_pins;
  }
  digitalWrite(pins[prevPin], LOW);
  digitalWrite(pins[curPin], HIGH);
  delay(timer);
}
