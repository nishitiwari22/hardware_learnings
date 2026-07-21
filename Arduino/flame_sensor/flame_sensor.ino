int flameSensor = 2;   // Flame sensor connected to Digital Pin 2
int led = 13;          // Built-in LED

void setup() {
  pinMode(flameSensor, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int flame = digitalRead(flameSensor);

  if (flame == LOW) {   // Flame detected (most modules are active LOW)
    Serial.println("🔥 Flame Detected!");
    digitalWrite(led, HIGH);
  } else {
    Serial.println("✅ No Flame");
    digitalWrite(led, LOW);
  }

  delay(500);
}
