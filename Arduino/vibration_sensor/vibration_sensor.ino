const int sensorPin = 6
int sensorState = 0;

void setup(){
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  sensorState = digitalRead(sensorPin);
  Serial.println(sensorState);
  delay(500);
}
