int button = 0;
int count = 5;

void setup() {
  pinMode(10, OUTPUT);
  pinMode(2, INPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  button = digitalRead(2);
  if (button == LOW) {
    digitalWrite(10, HIGH);
    Serial.println("Pump on");
    
    while (count != -1) {
      Serial.println(count);
      count = count - 1;
      delay(1000);
    }
    digitalWrite(10, LOW);
    Serial.println("Pump off\n");
    delay(150);

    while (button != HIGH) {
      button = digitalRead(2);
      digitalWrite(8, HIGH);
      delay(150);
      digitalWrite(8, LOW);
      delay(150);
      count = 5;
    }
    digitalWrite(8, LOW);
  }


}
