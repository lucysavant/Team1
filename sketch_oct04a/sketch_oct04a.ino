const int sensorPin = A0;   // magnetic sensor connected to A0
const int ledPin = 13;      // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT);   // set the LED pin as output
}

void loop() {
  int sensorValue = analogRead(sensorPin);  // read the value from the sensor

  if (sensorValue > 500) {   // if the sensor value is above a certain threshold
    digitalWrite(ledPin, HIGH);  // turn the LED on
  } else {
    digitalWrite(ledPin, LOW);   // turn the LED off
  }
}
