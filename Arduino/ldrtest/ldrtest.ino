//#define ldr_pin A0
//
//void setup() {
//  Serial.begin(9600);
//}
//
//void loop(){
//  Serial.println(digitalRead(ldr_pin));
//  delay(500);
//}

void setup() {
  pinMode(D4, OUTPUT);
}

void loop() {
  digitalWrite(D4, HIGH);
  delay(1000);
  digitalWrite(D4, LOW);
  delay(1000);  
}
