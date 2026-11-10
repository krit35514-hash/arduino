int BZ = 13;
int BT = 17;

void setup() {
  Serial.begin(9600);

  pinMode(BT, OUTPUT);
  pinMode(BZ, OUTPUT);
  int count = 1;

 
  for (int count = 1; count <= 10; count++) {
    
    digitalWrite(BT, LOW);
    digitalWrite(BZ, LOW);
    Serial.println(count);
    delay(500); 
    
    digitalWrite(BT, HIGH);
    digitalWrite(BZ, HIGH);
    delay(500); 
  }

  Serial.println("---");

 
  for (int count = 10; count >= 1; count--) {

    
    digitalWrite(BT, LOW);
    digitalWrite(BZ, LOW);
    Serial.println(count);
    delay(500); 
    
   
    digitalWrite(BT, HIGH);
    digitalWrite(BZ, HIGH);
    delay(500); 
  }

  Serial.println("---");
}

void loop() {

}