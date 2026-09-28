int button = 0;
int sen = 0;
int count = 5;

void setup() {
  pinMode(10, OUTPUT);
  pinMode(2, INPUT);
  pinMode(4, INPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  sen = digitalRead(2);
  button = digitalRead(4);
  if ((sen == LOW) && (button == LOW)){
    digitalWrite(10, HIGH);
    digitalWrite(6, HIGH);
    delay(5000);
 }else{
    digitalWrite(6,LOW);
    digitalWrite(10,LOW);
 } 


}
