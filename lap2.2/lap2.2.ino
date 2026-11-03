int counter = 0;

void setup() {
    Serial.begin(9600);
}

void loop() {
    counter = counter + 1;

    Serial.print("Counter = ");
    Serial.println(counter);

    delay(1000);
}
