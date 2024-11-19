/*
  EWURC-Kick-Start-To-Robotics-Level-1

  - chapter 2 - Analog and Digital signal
    In this part we will observe analog and digital signal using Serial Plotter.
  - vo1d
*/

#define BUTTON 2
#define POTENTIOMETER 4

void setup() {
  Serial.begin(9600);

  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(POTENTIOMETER, INPUT);
}

void loop() {
  Serial.print(analogRead(POTENTIOMETER));
  Serial.print('\t');
  Serial.println(digitalRead(BUTTON));
}

/*
  Task: After uploading, open serial plotter and try pressing the button or twist the potentiometer. What do you see?
*/