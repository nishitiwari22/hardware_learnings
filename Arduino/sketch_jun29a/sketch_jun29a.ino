    void setup() {
  // runs once, when the board powers on
  pinMode(13, OUTPUT);
}

void loop() {
  // runs over and over, forever
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}

//This little example blinks an LED on pin 13 — on for 1 second, off for 1 second, repeat forever.

// setup() is "what happens once when I turn it on," and loop() is "what happens again and again forever" — that framing tends to land well 
//even with younger students since it maps to something intuitive (like a morning routine vs. a repeating habit).

int buttonPin = 2;   // button connected to pin 2
int ledPin = 13;     // LED connected to pin 13
int buttonState = 0; // variable to store button reading

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin); // check if button is pressed

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH); // turn LED on
  } else {
    digitalWrite(ledPin, LOW);  // turn LED off
  }
}

//Wiring (quick mental picture): button on pin 2 connected through a resistor to ground, LED on pin 13 with a resistor to ground — standard breadboard setup.
//Grade-banded ways to explain it:
//
//Grades 2–5: "The Arduino is always watching the button, like a guard. If you press it, the guard turns the light on. If you let go, the guard turns it off."
//Grades 6–8: Introduce the idea of digital input vs digital output — the board reads a 0 or 1 from the button (digitalRead) and writes a 0 or 1 to the LED (digitalWrite). Good moment to explain HIGH = 5V/on, LOW = 0V/off.
//Grades 9–12: Bring in the if/else conditional logic explicitly, and you can extend it — challenge them to add a counter that tracks how many times the button was pressed (introduces variables that persist across loop iterations).
