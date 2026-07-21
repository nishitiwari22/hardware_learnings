int laser = 2;    // Laser module connected to pin 2
int led = 13;     // LED connected to pin 13

void setup()
{
  pinMode(laser, OUTPUT);   // Laser is an output device
  pinMode(led, OUTPUT);     // LED is also an output device

  Serial.begin(9600);
}

void loop()
{
  digitalWrite(laser, HIGH);   // Turn ON the laser
  digitalWrite(led, HIGH);     // Turn ON the LED

  Serial.println("Laser ON");
  delay(2000);

  digitalWrite(laser, LOW);    // Turn OFF the laser
  digitalWrite(led, LOW);      // Turn OFF the LED

  Serial.println("Laser OFF");
  delay(2000);
}
