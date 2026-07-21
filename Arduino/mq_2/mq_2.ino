int gasSensor = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int gasValue = analogRead(gasSensor);

  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  delay(1000);
}

// Led Alert Using Analog Output

int gasSensor = A0;
int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  int gasValue = analogRead(gasSensor);

  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  if (gasValue > 400) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }

  delay(1000);
}



//Method 3: Digital Output (DO)
//
//If you use the DO pin instead of AO, connect it to D2.


int gasPin = 2;
int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(gasPin, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int gasDetected = digitalRead(gasPin);

  if (gasDetected == LOW) {
    Serial.println("Gas Detected!");
    digitalWrite(led, HIGH);
  } else {
    Serial.println("No Gas");
    digitalWrite(led, LOW);
  }

  delay(500);
}



// Note: Many MQ-2 modules use an active LOW digital output, so LOW indicates gas detected. If your module behaves differently, reverse the condition.
