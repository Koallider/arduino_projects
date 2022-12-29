void setup() {
  for(int i = 0; i < 8; i++){
    pinMode(i, OUTPUT);
  }
}

int number = 1;

void loop() {
  int last = number % 10;
  int first = number / 10;

  for(int i = 0; i < 4; i++){
    digitalWrite(i, last & 0x1);
    last = last >> 1;
  }
  for(int i = 4; i < 8; i++){
    digitalWrite(i, first & 0x1);
    first = first >> 1;
  }
  delay(1000);
  number++;
}
