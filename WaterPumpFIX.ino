
int Half = 0;
int Full = 0;

void setup() {
  pinMode(8, OUTPUT);
  pinMode(2, INPUT);
  pinMode(9, OUTPUT);
  pinMode(4, INPUT);
}

void loop() {
  Half = digitalRead(4);
  Full = digitalRead(2);
   if (Half == LOW){
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
   }
   
   if (Full == HIGH){
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW );
   }
   
   else{
    digitalWrite(9, LOW);
   }
}
