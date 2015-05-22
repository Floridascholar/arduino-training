/*
This is the basic sketch for reading controlling the LED with a
photosensor. This sketch teaches the basics of inputs/outputs
with arduino and is the basis for understanding how to build
more complex functionality with arduino projects
*/

// set the variables for the pin that reads the photocell sensor 
// and the pin that controls the LED sensor
int photoPin = A0;
int ledPin = 9;
int threshold = 250;

// the setup routine
void setup() {
  
  // setup the arduino board so that the A0 pin will take input 
  // from the photocel sensor
  pinMode(photoPin, INPUT);
  
  // setup the arduino board so that the 9 pin will produce
  // output for the LED 
  pinMode(ledPin, OUTPUT);
}

void loop() {
  
  // if statement reads in the value from the photocell and
  // determines whether or not it is higher than the threshold.
  // if the photoPin value is less than the threshold, then it 
  // turns on the LED. else, it turns the LED off
  if (analogRead(photoPin) > threshold) {
    digitalWrite(ledPin, LOW);
  }
  else {
    digitalWrite(ledPin, HIGH);
  }
}



