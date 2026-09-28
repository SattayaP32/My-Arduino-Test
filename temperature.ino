const int sensorPin = A0;  // กำหนดขาที่เซ็นเซอร์ต่อ



void setup() {

  Serial.begin(9600);  // เริ่มต้น Serial communication

  pinMode(A0,INPUT);

}



void loop() {

  // อ่านค่าแอนะล็อกจากเซ็นเซอร์

  int sensorValue = analogRead(sensorPin);



  // แปลงค่าแอนะล็อกเป็นอุณหภูมิ (ค่าขอบเขตและการแปลงค่าอาจต้องปรับแต่งตาม TMP36 ที่ใช้)

  float temperature = (sensorValue * 0.004882814) - 0.5;

  temperature = temperature * 100;



  // แสดงผลลัพธ์ทาง Serial Monitor

  Serial.print("temperture : ");

  Serial.print(temperature);

  Serial.println(" Celsius");



  delay(1000); 

}
//https://www.allnewstep.com/product/697/tmp36-analog-temperature-sensor-tmp36-%E0%B9%80%E0%B8%8B%E0%B8%99%E0%B9%80%E0%B8%8B%E0%B8%AD%E0%B8%A3%E0%B9%8C%E0%B8%AD%E0%B8%B8%E0%B8%93%E0%B8%AB%E0%B8%A0%E0%B8%B9%E0%B8%A1%E0%B8%B4-ic-tmp36
