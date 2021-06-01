/*
Capacitors V1.0
Introduction to Electrical Engineering
31 May 2021
Nebula Education
by Nolan Tremelling
*/

void setup() {
  Serial.begin(9600); //Begins serial communication and allows us to utilize the serial plotter
}

void loop() {
  int probe = analogRead(A0); //reads analog pin 0 and stores as a variable "probe"
  double probeVoltage = probe*(5.0/1023.0); //converts probe reading into voltage, since analog readings are assigned out of 1023
  Serial.println(probeVoltage); //prints the probeVoltage in the serial plotter
  delay(100); //100 millisecond delay before taking another reading
}
