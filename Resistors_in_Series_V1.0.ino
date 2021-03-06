/*
Resistors in Series V1.0
Introduction to Circuits and Electricity
6 March 2021
Nebula Education
by Nolan Tremelling 6 March 2021
*/

void setup() {
  Serial.begin(9600); //Initializes serial communication
  Serial.println("Integer Voltage \t Double Voltage");
}

void loop() {
  int intsensorValue = analogRead(A0); //Declares that we'll be reading analog pin 0
  int intVoltage = intsensorValue * (5.0/1023.0); //Converts the
  double doublesensorValue = analogRead(A0);
  double doubleVoltage = doublesensorValue * (5.0/1023.0);
  Serial.print("\t");
  Serial.print(intVoltage);
  Serial.print("\t\t\t");
  Serial.println(doubleVoltage);
  delay(5000);
  }
