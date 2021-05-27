/*
Resistors in Series V1.1
Introduction to Electrical Engineering
26 May 2021
Nebula Education
by Nolan Tremelling
*/

void setup() {
  Serial.begin(9600); //Initializes serial communication, which allows us to see the outputs
  Serial.println("Integer Voltage \t Double Voltage"); //Writes headers in the serial monitor and uses a tab(/t) to format nicely
}

void loop() {
  int sensorValue = analogRead(A0); //Declares that we'll be reading analog pin 0
  int intVoltage = sensorValue * (5.0/1023.0); //Calculates the 10-bit conversion for 5 volts, and multiplies by the analog pin 0 reading. Then, it stores it as an integer
  double doubleVoltage = sensorValue * (5.0/1023.0); //Calculates the 10-bit conversion for 5 volts, and multiplies by the analog pin 0 reading. Then, it stores it as a double
  Serial.print("\t"); //Formats the serial monitor output using a tab(/t)
  Serial.print(intVoltage); //Prints the integer value of the measured voltage
  Serial.print("\t\t\t"); //Formats the serial monitor output using a tab(/t)
  Serial.println(doubleVoltage); //Prints the double value of the measured voltage
  delay(3000); //Delays the serial monitor from printing another measured voltage by three seconds.
  }
