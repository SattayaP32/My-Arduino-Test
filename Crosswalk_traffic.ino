int button = 0;
int c = 5;

void setup() {
  pinMode(2,INPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  button = digitalRead(2);
  if (button==HIGH){
    digitalWrite(3,HIGH);
    delay(3000);
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    delay(2000);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);
    while (c>0){
    Serial.println(c);
    delay(1000);
      c=c-1;
    }
    Serial.println(c);
    digitalWrite(8,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(3,LOW);
    delay(1000);
    }else{
      digitalWrite(8,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(5,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(3,LOW);
      c = 5;
      
      }
  
}
