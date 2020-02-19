/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

long randPin;
int pin_delay = 250;

int finger[5] = {1,2,3,4,5};
//int pin_number[5] = {4,6,3,2,,};


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  digitalWrite(2, LOW);  
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);


  Serial.begin(9600);

  randomSeed(analogRead(0));
}





// the loop function runs over and over again forever
void loop() {
  
  // print a random number pin from 10 to 19
  //randPin = random(2, 7);
  
  randPin = 5;

  Serial.print("We are pinging pin: ");
  Serial.println(randPin);


  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(randPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(pin_delay);                       // wait for a second
  
  
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(randPin, LOW);    // turn the LED off by making the voltage LOW
  delay(pin_delay);                       // wait for a second
}
