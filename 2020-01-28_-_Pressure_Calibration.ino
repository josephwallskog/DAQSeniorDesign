int PressurePin = A2;

void setup() {
  Serial.begin(9600);
}

void loop() {

  int PressureRead = analogRead(PressurePin);
  Serial.print(PressureRead);
  
}
