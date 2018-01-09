//set Pins
int analogPin = 0;
int analogPin1 = 1;
int analogPin2 = 2;
int analogPin3 = 3;
int analogPin4 = 4;
int analogPin5 = 5;
int analogPin6 = 6;
int analogPin7 = 7;
int analogPin8 = 8;
int analogPin9 = 9;
int analogPin10 = 10;
int analogPin11 = 11;
int analogPin12 = 12;
int analogPin13 = 13;
int analogPin14 = 14;
int analogPin15 = 15;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // read the raw data coming in on analog pins:
  int voltage1 = analogRead(analogPin);
  int voltage2 = analogRead(analogPin1);
  int voltage3 = analogRead(analogPin2);
  int voltage4 = analogRead(analogPin3);
  int voltage5 = analogRead(analogPin4);
  int voltage6 = analogRead(analogPin5);
  int voltage7 = analogRead(analogPin6);
  int voltage8 = analogRead(analogPin7);
  int voltage9 = analogRead(analogPin8);
  int voltage10 = analogRead(analogPin9);
  int voltage11 = analogRead(analogPin10);
  int voltage12 = analogRead(analogPin11);
  int voltage13 = analogRead(analogPin12);
  int voltage14 = analogRead(analogPin13);
  int voltage15 = analogRead(analogPin14);
  int voltage16 = analogRead(analogPin15);
 
  // Convert the raw data value (0 - 1023) to voltage (0.0V - 5.0V):
  float voltage = voltage1 * (5.0 / 1024.0);
  float voltageb = voltage2 * (5.0 / 1024.0);
  float voltagec = voltage3 * (5.0 / 1024.0);
  float voltaged = voltage4 * (5.0 / 1024.0);
  float voltagee = voltage5 * (5.0 / 1024.0);
  float voltagef = voltage6 * (5.0 / 1024.0);
  float voltageg = voltage7 * (5.0 / 1024.0);
  float voltageh = voltage8 * (5.0 / 1024.0);
  float voltagei = voltage9 * (5.0 / 1024.0);
  float voltagej = voltage10 * (5.0 / 1024.0);
  float voltagek = voltage11 * (5.0 / 1024.0);
  float voltagel = voltage12 * (5.0 / 1024.0);
  float voltagem = voltage13 * (5.0 / 1024.0);
  float voltagen = voltage14 * (5.0 / 1024.0);
  float voltageo = voltage15 * (5.0 / 1024.0);
  float voltagep = voltage16 * (5.0 / 1024.0);
  
  // write the voltage value to the serial monitor:
  Serial.print("voltage 1 = ");
  Serial.println(voltage);
  Serial.print("voltage 2 = ");
  Serial.println(voltageb);
  Serial.print("voltage 3 = ");
  Serial.println(voltagec);
  Serial.print("voltage 4 = ");
  Serial.println(voltaged);
   Serial.print("voltage 5 = ");
  Serial.println(voltagee);
  Serial.print("voltage 6 = ");
  Serial.println(voltagef);
  Serial.print("voltage 7 = ");
  Serial.println(voltageg);
  Serial.print("voltage 8 = ");
  Serial.println(voltageh);
   Serial.print("voltage 9 = ");
  Serial.println(voltagei);
  Serial.print("voltage 10 = ");
  Serial.println(voltagej);
  Serial.print("voltage 11 = ");
  Serial.println(voltagek);
  Serial.print("voltage 12 = ");
  Serial.println(voltagel);
   Serial.print("voltage 13 = ");
  Serial.println(voltagem);
  Serial.print("voltage 14 = ");
  Serial.println(voltagen);
  Serial.print("voltage 15 = ");
  Serial.println(voltageo);
  Serial.print("voltage 16 = ");
  Serial.println(voltagep);
  
  delay(2000);

}
