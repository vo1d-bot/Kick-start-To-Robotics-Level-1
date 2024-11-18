/*
  EWURC-Kick-Start-To-Robotics-Level-1

  - chapter 1 - Introduction to Serial Monitor
    Serial Monitor Usage:
      Debugging- Print variable values and trace program flow.
      Communication- Send/receive data to/from other devices.
      User Interaction- Prompt for input and display output.
    Before using serial monitor you must initialize serial monitor by calling Serial.begin(baud rate) function 
    in the setup() part.
  - vo1d
*/

void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bits per seconds

  Serial.println("This text will be shown once.");  // as the setup function runs ONCE when you press RESET button or power the board
  delay(500);
}

void loop() {
  Serial.println("This message will be shown every one second.");
  delay(1000);
}

/*
  Task: Change the baud rate to 115200, upload the code and then open serial monitor. What do you see?
*/