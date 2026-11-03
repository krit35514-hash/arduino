const int BT = 17;
const int WIFI = 2;
const int NTP = 15;
const int IOT = 12;


void setup() { 

     Serial.begin(9600);
     pinMode(BT , OUTPUT);
     pinMode(WIFI , OUTPUT);
     pinMode(NTP , OUTPUT);
     pinMode(IOT , OUTPUT);


     digitalWrite(BT , HIGH);
     digitalWrite(WIFI , HIGH);
     digitalWrite(NTP , HIGH);
     digitalWrite(IOT , HIGH);


}

void loop() {
      if(Serial.read() == 'a'){
      digitalWrite(BT , LOW);
      delay(3000);
      digitalWrite(BT , HIGH);
      
}
      if(Serial.read() == 's'){
      digitalWrite(WIFI , LOW);
           delay(3000);
      digitalWrite(WIFI , HIGH);
}

      if(Serial.read() == 'd'){
      digitalWrite(NTP , LOW);
           delay(3000);
      digitalWrite(NTP , HIGH);
}
      
      if(Serial.read() == 'f'){
      digitalWrite(IOT , LOW);
           delay(3000);
      digitalWrite(IOT , HIGH);
      }
    

}
