int buttonState = 0;
int infraState = 0;         
int count=0;
int value=0;
int row1=0;
int row2=0;
int row1C=0;
int row2C=0;


void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  pinMode(12, OUTPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(2);
  infraState = digitalRead(3);
  if (buttonState == LOW) {
     if((row1%2==1)&&(row1!=0)){
     digitalWrite(13, HIGH);
     count=count+1;
     row1C=row1C+1;
     value=value+1;
     row1=row1+1;
     Serial.print("จำนวนคนในช่องที่ 1 = ");
     Serial.println(row1C);
     Serial.print("ยอดเงินในช่องที่ 1    = ");
     Serial.println(row1);
     Serial.print("จำนวนคนในช่องที่ 2 = ");
     Serial.println(row2C);
     Serial.print("ยอดเงินในช่องที่ 2    = ");
     Serial.println(row2);
     Serial.print("ยอดคนใช้บริการทั้งหมด = ");
     Serial.println(count);
     Serial.print("ยอดเงินที่ได้รับทั้งหมด  = ");
     Serial.println(value);
     Serial.println("\n");
     delay (5000);
  }else{
     value=value+1;
     row1=row1+1;
     Serial.print("จำนวนคนในช่องที่ 1 = ");
     Serial.println(row1C);
     Serial.print("ยอดเงินในช่องที่ 1    = ");
     Serial.println(row1);
     Serial.print("จำนวนคนในช่องที่ 2 = ");
     Serial.println(row2C);
     Serial.print("ยอดเงินในช่องที่ 2    = ");
     Serial.println(row2);
     Serial.print("ยอดคนใช้บริการทั้งหมด = ");
     Serial.println(count);
     Serial.print("ยอดเงินที่ได้รับทั้งหมด  = ");
     Serial.println(value);
     Serial.println("\n");
    }
  }if (infraState == LOW) {
  if((row2%2==1)&&(row2!=0)){
     digitalWrite(12, HIGH);
     count=count+1;
     row2C=row2C+1;
     value=value+1;
     row2=row2+1;
     Serial.print("จำนวนคนในช่องที่ 1 = ");
     Serial.println(row1C);
     Serial.print("ยอดเงินในช่องที่ 1    = ");
     Serial.println(row1);
     Serial.print("จำนวนคนในช่องที่ 2 = ");
     Serial.println(row2C);
     Serial.print("ยอดเงินในช่องที่ 2    = ");
     Serial.println(row2);
     Serial.print("ยอดคนใช้บริการทั้งหมด = ");
     Serial.println(count);
     Serial.print("ยอดเงินที่ได้รับทั้งหมด  = ");
     Serial.println(value);
     Serial.println("\n");
     delay (5000);
  }else{
     value=value+1;
     row2=row2+1;
     Serial.print("จำนวนคนในช่องที่ 1 = ");
     Serial.println(row1C);
     Serial.print("ยอดเงินในช่องที่ 1    = ");
     Serial.println(row1);
     Serial.print("จำนวนคนในช่องที่ 2 = ");
     Serial.println(row2C);
     Serial.print("ยอดเงินในช่องที่ 2    = ");
     Serial.println(row2);
     Serial.print("ยอดคนใช้บริการทั้งหมด = ");
     Serial.println(count);
     Serial.print("ยอดเงินที่ได้รับทั้งหมด  = ");
     Serial.println(value);
     Serial.println("\n");
    }
  }else{
     digitalWrite(13,LOW);
     digitalWrite(12,LOW);
     delay(250);
  }
}
