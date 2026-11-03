const int MAX_SCORE = 100;
const float PI_VALUE = 3.14159;

void setup() {
    Serial.begin(9600);

    Serial.print("Maximum Score = ");
    Serial.println(MAX_SCORE);

    Serial.print("PI = ");
    Serial.println(PI_VALUE, 5);
}

void loop() {
}
