int ledPin = 13;
int analogPin = 5; //ประกาศตัวแปร ให้ analogPin แทนขา analog ขาที่5
int val = 0;
void setup() {
pinMode(ledPin, OUTPUT); // sets the pin as output
Serial.begin(9600);
}
void loop() {
val = analogRead(analogPin); //อ่านค่าสัญญาณ analog ขา5
Serial.print("val = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
Serial.println(val); // พิมพ์ค่าของตัวแปร val
if (val > 600) { // สามารถกำหนดปรับค่าได้ตามสถานที่ต่างๆ
digitalWrite(ledPin, HIGH); // สั่งให้ LED ติดสว่าง
}
else {
digitalWrite(ledPin, LOW); // สั่งให้ LED ดับ
}
delay(100);
}
//https://www.cybertice.com/product/44/mq-2-smoke-gas-sensor-%E0%B9%80%E0%B8%8B%E0%B9%87%E0%B8%99%E0%B9%80%E0%B8%8B%E0%B8%AD%E0%B8%A3%E0%B9%8C%E0%B8%95%E0%B8%A3%E0%B8%A7%E0%B8%88%E0%B8%88%E0%B8%B1%E0%B8%9A%E0%B8%84%E0%B8%A7%E0%B8%B1%E0%B8%99-%E0%B9%81%E0%B8%81%E0%B9%8A%E0%B8%AA%E0%B8%A1%E0%B8%B5%E0%B9%80%E0%B8%97%E0%B8%99-lpg-smoke-co
