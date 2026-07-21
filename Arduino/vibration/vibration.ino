const int sensorPin = 4;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop() {
  //check for vibration
  if (digitalRead(sensorPin)) {
    Serial.println("Detected Vibration...");
  } else {
    Serial.println("...");
  }
  delay(100);
}
