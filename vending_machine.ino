int insert = 0;
int start = 0;
int coin = 0;
int count = 5;
int c = 0;

void setup() {
pinMode(2, INPUT);
pinMode(4, INPUT);
pinMode(10, OUTPUT);
Serial.begin(9600);

}

void loop() {
  insert = digitalRead(2);
  start = digitalRead(4);
  if (insert==LOW){
    coin++;
    Serial.print("เหรียญ = ");
    Serial.print(coin);
    Serial.print("\n");
    delay(500);
  }else if (coin>=5){
    if(start==LOW){
      digitalWrite(10,HIGH);
      Serial.println("\nกำลังดำเนินการ");
      while (count != -1) {
      Serial.println(count);
      count = count - 1;
      delay(1000);
    }
    Serial.println("เสร็จสิน");
    digitalWrite(10,LOW);
    c = coin-5;
    Serial.print("เงินทอน = ");
    Serial.print(c);
    Serial.print("\n");
    coin = 0;
    count = 8;
    delay(500);
    }
  }
}
