/*
  EWURC-Kick-Start-To-Robotics-Level-1

  - chapter 1 - analogWrite() and PWM
    So far, we learned how to use Digital Pins of the Arduino Uno board for both Input and Output purpose. Now, we will use
    analogRead() to read analog sensors and other devices that provide continuous data, like temperature or light sensors.
  - vo1d
*/

#define LED 2 // PWM(~) pin of the Arduino
#define CONTROLLER 4  // for Arduino use any analog pins A0, A1,.....A5
#define MAX_INPUT_VALUE 4095 // The standard resolution on ESP boards is set to 12-bit (0-4095). The standard resolution on Arduino boards is set to 10-bit (0-1023)
#define MAX_PWM_VALUE 255 // The default PWM resolution is 8 bits for both Arduino and ESP boards, which is values between 0 and 255.


int value = 0, brightness = 0, intensity = 0;

void setup() {
  Serial.begin(9600);

  pinMode(CONTROLLER, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  value = analogRead(CONTROLLER);

  brightness = (MAX_PWM_VALUE * value) / MAX_INPUT_VALUE;
  intensity = (brightness * 100) / MAX_PWM_VALUE;

  printData();

  analogWrite(LED, brightness);
  delay(30);
}

void printData() {
  Serial.print("CONTROLLER VALUE:");
  Serial.print("  ");
  Serial.print(value);
  Serial.print(" LED PWM VALUE: ");
  Serial.println(brightness);
  Serial.print("The LED is currently at ");
  Serial.print(intensity);
  Serial.println("% brightness.");
  Serial.println();
}

