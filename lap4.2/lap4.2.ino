void setup() {
Serial.begin(9600);
int count = 10;
do {

Serial.println(count);
count --;

}
while (count >= 0);

}

void loop() {
  // put your main code here, to run repeatedly:

}
