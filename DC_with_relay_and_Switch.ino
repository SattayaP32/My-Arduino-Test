int LeftState = digitalRead(2);
int RightState = digitalRead(4);
void setup() {
    pinMode(2, INPUT);
    pinMode(4, INPUT);  
    pinMode(6, OUTPUT);
    pinMode(8, OUTPUT);
    Serial.begin(9600);
} 
void loop() {
  int RightState = digitalRead(2);
  int LeftState = digitalRead(4);
    if (digitalRead(2)) {
      Serial.println("Left");
      digitalWrite(6, HIGH);
      digitalWrite(8, LOW);
      delay(1000);
    } if (digitalRead(4)) {
      Serial.println("Right");
      digitalWrite(8, HIGH);
      digitalWrite(6, LOW);
      delay(1000);
    }

}
