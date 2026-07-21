// IR Obstacle Avoidance Sensor

const int irSensor = 2;   // Sensor OUT connected to D2

void setup() {
  pinMode(irSensor, INPUT);
  Serial.begin(9600);
}

void loop() {

  int sensorValue = digitalRead(irSensor);

  if (sensorValue == LOW) {
    Serial.println("Obstacle Detected!");
  }
  else {
    Serial.println("No Obstacle");
  }

  delay(500);
}
