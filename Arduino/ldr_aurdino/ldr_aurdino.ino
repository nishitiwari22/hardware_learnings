/*
  LDR Module (Digital Output) with Arduino Uno

  This LDR module has:
  VCC -> 5V
  GND -> GND
  DO  -> Digital Pin 2

  The module has an onboard comparator (LM393).
  A small potentiometer on the module is used to
  adjust the light sensitivity threshold.
*/

int ldrPin = 2;     // Digital pin connected to DO
int ldrState = 0;   // Stores HIGH or LOW

void setup()
{
  // Configure the pin as an input
  pinMode(ldrPin, INPUT);

  // Start Serial Monitor
  Serial.begin(9600);

  Serial.println("LDR Digital Sensor Test");
}

void loop()
{
  // Read the digital output from the sensor
  ldrState = digitalRead(ldrPin);

  /*
    digitalRead() returns:
    HIGH (1)
    LOW  (0)
  */

  if (ldrState == HIGH)
  {
    Serial.println("Light Detected");
  }
  else
  {
    Serial.println("Darkness Detected");
  }

  delay(500);
}
