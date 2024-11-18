/*
  EWURC-Kick-Start-To-Robotics-Level-1

  - chapter 0 - Blink
   Turns a LED ON for one second, then OFF for one second, repeatedly. Most Arduinos have an on-board LED you can control. 
   On the UNO, MEGA and ZERO it is attached to digital pin 13. A constant named LED_BUILTIN with value of 13 is already
   defined, you can also use pinMode(LED_BUILTIN, OUTPUT) [used in chapter 1] without defining it explicitly. Although we will define it for 
   better understanding.
  - vo1d
*/
#define LED 13

// the setup function runs ONCE when you press RESET button or power the board
void setup() {
  pinMode(LED, OUTPUT);
} 
// Quiz: Can you identify the RESET button on the Arduino?

// the loop function runs repeatedly as long as power is provided to the board / RESET button is not pressed
void loop() {
  digitalWrite(LED, HIGH); 
  delay(1000);                      
  digitalWrite(LED, LOW);   
  delay(1000);              
}

/*
  Task: Can you make the LED blink every 0.5 seconds instead of 1?
*/