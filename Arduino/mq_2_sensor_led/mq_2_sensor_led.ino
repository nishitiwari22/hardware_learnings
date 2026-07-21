int gasSensor = 2;   // MQ-2 digital output connected to pin 2
int led = 13;        // LED connected to pin 13

void setup()
{
  pinMode(gasSensor, INPUT);   // Set MQ-2 as input
  pinMode(led, OUTPUT);        // Set LED as output

  Serial.begin(9600);          // Start Serial Monitor
}

void loop()
{
  int gasValue = digitalRead(gasSensor);   // Read sensor

  Serial.print("Gas Sensor Value: ");
  Serial.println(gasValue);

  if(gasValue == LOW)   // Gas detected
  {
    digitalWrite(led, HIGH);
    Serial.println("Gas Detected! LED ON");
  }
  else                  // No gas detected
  {
    digitalWrite(led, LOW);
    Serial.println("No Gas Detected. LED OFF");
  }

  delay(500);
}
