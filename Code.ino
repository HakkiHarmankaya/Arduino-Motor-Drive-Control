int motorPini3 = 9;
int motorPini4 = 10;

void setup() {
  pinMode(motorPini3, OUTPUT);
  pinMode(motorPini4, OUTPUT);
}

void loop() {
  // İleri hareket
  digitalWrite(motorPini3, HIGH);
  digitalWrite(motorPini4, LOW);
}
