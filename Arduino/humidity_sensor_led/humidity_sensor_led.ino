#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11
#define LED 13

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(LED, OUTPUT);
}

void loop() {
  float humidity = dht.readHumidity();

  if (isnan(humidity)) {
    Serial.println("Sensor Error");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println("%");

  if (humidity > 70) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }

  delay(2000);
}
