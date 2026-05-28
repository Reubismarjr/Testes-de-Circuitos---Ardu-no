const int Pinb = 6;
int Estadob = 0;
const int Ledt = 8;
const int Ledt2 = 10;
void setup() {
  Serial.begin(9600); 
  pinMode(Pinb, INPUT_PULLUP);
  pinMode(Ledt, OUTPUT);
  pinMode(Ledt2, OUTPUT);
}

void loop() {
  Estadob = digitalRead(Pinb);


  if(Estadob == LOW){
    digitalWrite(Ledt, HIGH);
    Serial.println("PRESSIONADO (Sinal no GND)");
  }
  else{
    Serial.println("NÃO ESTÁ (Pino vazio ou solto)");
    digitalWrite(Ledt, LOW);
    digitalWrite(Ledt2, HIGH);
    delay(500);
    digitalWrite(Ledt2, LOW);
    
  }
  
  delay(100);
}
