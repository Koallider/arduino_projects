void setup() {
  for(int i = 0; i < 8; i++){
    pinMode(i, OUTPUT);
  }
}

int activePin = 0;

void loop() {
  digitalWrite(activePin, HIGH);
  delay(500);
  digitalWrite(activePin, LOW);
  activePin = (activePin + 1) % 8;
}
