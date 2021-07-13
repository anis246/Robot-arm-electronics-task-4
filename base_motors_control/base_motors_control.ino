int enable1 = 5;
int input1 = 4;
int input2 = 3;

int enable2 = 9;
int input3 = 8;
int input4 = 7;

void setup() {
  
  pinMode(enable1, OUTPUT);
  pinMode(enable2, OUTPUT);
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(input3, OUTPUT);
  pinMode(input4, OUTPUT);
  
  
  digitalWrite(input1, LOW);
  digitalWrite(input2, LOW);
  digitalWrite(input3, LOW);
  digitalWrite(input4, LOW);
}

void loop() {
    analogWrite(enable1, 255);
  analogWrite(enable2, 255);
  
    digitalWrite(input1, HIGH);
  digitalWrite(input2, LOW);
  digitalWrite(input3, HIGH);
  digitalWrite(input4, LOW);
  delay(5000);
  
    digitalWrite(input1, LOW);
  digitalWrite(input2, HIGH);
  digitalWrite(input3, LOW);
  digitalWrite(input4, HIGH);
  delay(5000);
  
    digitalWrite(input1, HIGH);
  digitalWrite(input2, LOW);
  digitalWrite(input3, HIGH);
  digitalWrite(input4, LOW);
  
  for (int i = 0; i < 256; i++) {
    analogWrite(enable1, i);
    analogWrite(enable2, i);
    delay(20);
  }
  
  
  for (int i = 255; i >= 0; --i) {
    analogWrite(enable1, i);
    analogWrite(enable2, i);
    delay(20);
  }
  
  
  digitalWrite(input1, LOW);
  digitalWrite(input2, LOW);
  digitalWrite(input3, LOW);
  digitalWrite(input4, LOW);
  
}
