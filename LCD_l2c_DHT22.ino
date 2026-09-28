#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
int buttonState = 0;
int State = 0;
int count = 0;
const int sensorPin = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  pinMode(13,INPUT);
  pinMode(12,INPUT);
  
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Hello World");
  lcd.setCursor(1, 1);
  lcd.print("Temperature");
  delay(2000);
  lcd.backlight();
  lcd.clear();
  dht.begin();
}

void loop()
{
float h = dht.readHumidity(); //ความชื้น
float t = dht.readTemperature(); // อุณหภูมิ C
float f = dht.readTemperature(true); // อุณหภูมิ F
if (isnan(h) || isnan(t) || isnan(f)) {
Serial.println(F("Failed to read from DHT sensor!"));
return;
}
float hif = dht.computeHeatIndex(f, h);
float hic = dht.computeHeatIndex(t, h, false);

State = digitalRead(12); 
buttonState = digitalRead(13);
  if (buttonState == HIGH) {
  count=count+1;
  lcd.clear();
  }else if(State == HIGH){
  count=count-1;
  lcd.clear();
  }
   
  if(t >= 29.00){
  lcd.setCursor(0, 0);
  lcd.print("Count= ");
  lcd.print(count);
  lcd.setCursor(11, 0);
  lcd.print("!Heat");
  lcd.setCursor(0, 1);
  lcd.print("Temp = ");
  lcd.print(t);
  lcd.print(" C ");
  digitalWrite(3,HIGH);
  delay(250);
  }else{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Count= ");
  lcd.print(count);
  lcd.setCursor(0, 1);
  lcd.print("Temp = ");
  lcd.print(t);
  lcd.print(" C ");
  digitalWrite(3,LOW);
  delay(250);
  }
}
