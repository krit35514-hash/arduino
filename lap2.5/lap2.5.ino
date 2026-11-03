#define LED_PIN 17
#define BUTTON_A 16

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_A, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(BUTTON_A) == LOW) {
    digitalWrite(LED_PIN, LOW);
  } else {
    digitalWrite(LED_PIN, HIGH);
  }
}



