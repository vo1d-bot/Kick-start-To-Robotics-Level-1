/*
  EWURC-Kick-Start-To-Robotics-Level-1

  - chapter 1 - Introduction to analogRead()
    So far, we learned how to use Digital Pins of the Arduino Uno board for both Input and Output purpose. Now, we will use
    analogRead() to read analog sensors and other devices that provide continuous data, like temperature or light sensors.
  - vo1d
*/
#define POTENTIOMETER A0

void setup() {
  Serial.begin(9600);

  pinMode(POTENTIOMETER, INPUT);
}

void loop() {
  int value = analogRead(POTENTIOMETER);
  Serial.print("Value: ");
  Serial.println(value);
}

/*
  No Task! :)
*/
