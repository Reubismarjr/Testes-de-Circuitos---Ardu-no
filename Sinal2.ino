

const int ledVerde = 13;
const int ledVermelho = 12;
const int ledAmarelo = 8; 

void setup() {
  
  pinMode(ledVerde, OUTPUT);
   pinMode(ledVermelho, OUTPUT);
   pinMode(ledAmarelo, OUTPUT);
}

void loop() {

  digitalWrite(ledVerde , HIGH);
  delay(5000); 
  digitalWrite(ledVerde , LOW);
  delay(100);

   digitalWrite(ledAmarelo, HIGH);
  delay(3000); 
  digitalWrite(ledAmarelo, LOW);
  delay(100);
  
  digitalWrite(ledVermelho, HIGH);
  delay(5000); 
  digitalWrite(ledVermelho, LOW);
  delay(100);
}
