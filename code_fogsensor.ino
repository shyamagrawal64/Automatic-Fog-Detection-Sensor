#include <DHT.h>  // DHT11 Sensor Library

#define DHTPIN 2      // DHT11 connected to Pin D2
#define DHTTYPE DHT11 // DHT11 Sensor Type

#define LDR_PIN 3  // LDR Module ka D0 pin D3 se connected hai
#define LED_PIN 4  // LED connected to D4

DHT dht(DHTPIN, DHTTYPE);  // DHT Object

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(LDR_PIN, INPUT);
  Serial.begin(9600);
  dht.begin(); 
}

void loop() {
  int ldrValue = digitalRead(LDR_PIN);  // LDR ka digital value read karaga
  float temp = dht.readTemperature();   // Temperature Read
  float humidity = dht.readHumidity();  // Humidity Read

  Serial.print("LDR Value: ");
  Serial.print(ldrValue);
  Serial.print(" | Temperature: ");
  Serial.print(temp);
  Serial.print("°C | Humidity: ");
  Serial.print(humidity);
  Serial.println("%");

  //  Actual Fog Condition Check (3 Conditions Must Be True)
  if (ldrValue == HIGH && humidity > 70 && (temp >= 5 && temp <= 30)) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("⚠ Real Fog Detected! LED ON");
  } else {
    digitalWrite(LED_PIN, LOW);
    Serial.println("✅ No Fog! LED OFF");
  }

  delay(1000);
}