/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = A0;  // analog pin used to connect the potentiometer
int servoPin=9;
int val;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(servoPin);  // attaches the servo on pin 9 to the servo object
  Serial.begin(115200);
}

void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  int pos = map(val, 0, 1023, 5, 175);     // scale it to use it with the servo (value between 0 and 180)
  Serial.print(val);
  Serial.print(",");
  Serial.println(pos);
  myservo.write(pos);                  // sets the servo position according to the scaled value
  
  delay(15);                           // waits for the servo to get there
}

