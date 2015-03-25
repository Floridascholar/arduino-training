/*
This is the basic sketch for learning how to read sensor values
through the serial port of the arduino.
*/

// set the variable for the light sensor pin
int lightPin = A0;

// the setup routine runs once when you press reset:
void setup() {
  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  
  // print out the value read from the A0 pin--the light sensor:
  Serial.println(analogRead(lightPin));
  
  // delay the loop
  delay(300);        
}
