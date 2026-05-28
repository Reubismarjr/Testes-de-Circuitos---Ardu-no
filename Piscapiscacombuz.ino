

const int Led = 13;
const int Led2 = 12;
const int bip = 8;
const int Led3 = 2;
 

void setup() {
  
  pinMode(Led, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(bip, OUTPUT);
  pinMode(Led3, OUTPUT);
  
  
}

void loop() {
   
tone(bip, 1000);
delay(500);
noTone(bip);
delay(500);
      digitalWrite(Led2, HIGH);
      delay(5000); 
        digitalWrite(Led2, LOW);
        delay(1);

        
         digitalWrite(Led, HIGH);
      delay(2000); 
        digitalWrite(Led, LOW);
        delay(1);

      digitalWrite(Led3, HIGH);
      delay(5000); 
        digitalWrite(Led3, LOW);
        delay(1);
       


}
