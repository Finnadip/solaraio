// C++ code
//
#include <Servo.h>

int i = 0;

int j = 0;

int k = 0;

int m = 0;

Servo servo_8;

Servo servo_9;

void setup()
{
  pinMode(7, INPUT);
  servo_8.attach(8, 500, 2500);
  servo_9.attach(9, 500, 2500);
}

void loop()
{
  if (digitalRead(7) == HIGH) {
    servo_8.write(0);
    delay(5000); // Wait for 5000 millisecond(s)
    servo_8.write(90);
    delay(5000); // Wait for 5000 millisecond(s)
    servo_9.write(0);
    delay(5000); // Wait for 5000 millisecond(s)
    servo_9.write(90);
  } else {
  }
}
