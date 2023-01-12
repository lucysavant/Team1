// Code for weight sensor input and light sensor output on Arduino

int weightSensorPin = A0;  // select the input pin for the weight sensor
int lightSensorPin = A1;   // select the input pin for the light sensor
int weightValue = 0;       // variable to store the weight sensor value
int lightValue = 0;        // variable to store the light sensor value

void setup() {
  pinMode(weightSensorPin, INPUT);
  pinMode(lightSensorPin, INPUT);
}

void loop() {
  weightValue = analogRead(weightSensorPin);   // read the value from the weight sensor
  lightValue = analogRead(lightSensorPin);     // read the value from the light sensor

  // use the sensor values for your project here
}
