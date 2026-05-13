

const int pinoLED = 13;
 

void setup() {
  
  pinMode(pinoLED, OUTPUT);
  
  
}

void loop() {


  digitalWrite(pinoLED, HIGH);
  delay(1000); 
  digitalWrite(pinoLED, LOW);
  delay(1000);


  
}