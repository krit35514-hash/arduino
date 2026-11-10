int BZ = 13;

int BT = 17;
void setup() {
    Serial.begin(9600);
    pinMode(BT , OUTPUT);
    int count = 1;
    while (count <= 5) {
        digitalWrite(BT , LOW);
        analogWrite(BZ , LOW);
        delay(1000);

        digitalWrite(BT , HIGH);
        analogWrite(BZ , HIGH);
        delay(1000);
        Serial.println(count);
        count++;
    }
}

void loop() {
}