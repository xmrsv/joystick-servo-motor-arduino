#include <Servo.h>

const int Y_pin = A0;
Servo servo;
int value;

void setup() {
    myservo.attach(7); 
}

void loop() {
    value = analogRead(Y_pin);
    value = map(value, 0, 1023, 0, 180);
    servo.write(value);
    delay(15);
}
