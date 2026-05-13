

const int pinoLED = 13;
const int pinoLED2 = 12;
const int pinoLED3 = 8; 

void setup() {
  
  pinMode(pinoLED, OUTPUT);
   pinMode(pinoLED2, OUTPUT);
   pinMode(pinoLED3, OUTPUT);
}

void loop() {

  digitalWrite(pinoLED2, HIGH);
  delay(5000); 
  digitalWrite(pinoLED2, LOW);
  delay(100);

  digitalWrite(pinoLED3, HIGH);
  delay(3000); 
  digitalWrite(pinoLED3, LOW);
  delay(100);
  
  digitalWrite(pinoLED, HIGH);
  delay(5000); 
  digitalWrite(pinoLED, LOW);
  delay(100);

  digitalWrite(pinoLED3, HIGH);
  delay(3000); 
  digitalWrite(pinoLED3, LOW);
  delay(100);
  
}
