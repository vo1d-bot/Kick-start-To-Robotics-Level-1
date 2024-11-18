/*
  EWURC-Kick-Start-To-Robotics-Level-1

  - chapter 1 - IR sensor & digitalRead()
    In this section we will connect a IR sensor with Arduino and use digitalRead() to read the sensor value. Based on the sensor data
    we will control some other devices. 
  - vo1d
*/

int IR_sensor = 9;
bool trigger = false;

void setup() {
  Serial.begin(9600);
  pinMode(IR_sensor, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  sensorRead();

  if(trigger == true) {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else {
    digitalWrite(LED_BUILTIN, LOW);
  }
}

void sensorRead() {
  int sensorStatus = digitalRead(IR_sensor);

  if(sensorStatus == 1) {
    trigger = true;
  }
  else {
    trigger = false;
  }
}

/*
  Task: Make an object detection system that i) turns on a LED 1 second ii) turns on a BUZZER for 0.5 second
  iii) prints "object detected" on the serial monitor at the same time upon detecting object. If no object is
  detected, the LED and BUZZER should be OFF and serial monitor should not prints anything.
*/