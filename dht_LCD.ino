#include <DHT.h>
#include <LiquidCrystal.h>


#define DHTPIN 13           // DHT22 data pin connected to Arduino digital pin 13
#define DHTTYPE DHT11      // DHT22 (AM2302) sensor type
#define BUZZER_PIN 7       // Buzzer connected to digital pin 7

DHT dht(DHTPIN, DHTTYPE);
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(BUZZER_PIN, OUTPUT);
  
  digitalWrite(BUZZER_PIN, HIGH); // Buzz the buzzer
  delay(1000);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  // Display temperature and humidity
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temp);
  lcd.print(" C");
  lcd.setCursor(0, 1);
  lcd.print("Hum: ");
  lcd.print(hum);
  lcd.print(" %");
  delay(1000);
  if (temp >= 40.0) {
    digitalWrite(BUZZER_PIN, HIGH); // Buzz the buzzer
    delay(1000);
    digitalWrite(BUZZER_PIN, LOW);
    
  } else {
    digitalWrite(BUZZER_PIN, LOW); // Turn off the buzzer
    
  }
}
