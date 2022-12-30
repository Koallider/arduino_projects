void setup() {
  for(int i = 0; i < 8; i++){
    pinMode(i, OUTPUT);
  }
}

int number = 1;

int newNumber;

void loop() {
  int temp = number;
  for(int i = 0; i < 2; i++){
    digitalWrite(1, LOW);
    digitalWrite(0, LOW);
    digitalWrite(i, HIGH);
    int out = temp % 10;
    for(int j = 4; j < 8; j++){
      digitalWrite(j, out & 1);
      out >>= 1;
    }
    temp /= 10;
    delay(10);
    newNumber+= 10;
  }
  if(newNumber >= 1000){
    number++;
    newNumber = 0;
  }
}
