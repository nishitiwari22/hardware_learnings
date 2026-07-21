#include <DHT.h>

#define DHTPIN 2        // Data pin connected to Digital Pin 2
#define DHTTYPE DHT11   // Change to DHT22 if using DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%");

  Serial.print("  Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(2000);
}
