const int pinoTrig = 9;
const int pinoEcho = 10;
const int Led1 = 5;
const int Led2 = 6;
const int Led3 = 7;
long duracao;
float distancia;
const int buz = 2;
void setup() {

Serial.begin(9600);

pinMode(pinoTrig, OUTPUT);
pinMode(pinoEcho, INPUT);

pinMode(Led1, OUTPUT);
pinMode(Led2, OUTPUT);
pinMode(Led3, OUTPUT);
}

void loop() {
  digitalWrite(pinoTrig, LOW);
  delayMicroseconds(2);
  digitalWrite(pinoTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinoTrig, LOW);


  duracao = pulseIn(pinoEcho, HIGH);
  distancia = (duracao * 0.0343) / 2;


if(distancia <10){
    digitalWrite(Led1, HIGH);
    digitalWrite(Led2, HIGH);
    digitalWrite(Led3, HIGH);
  tone(buz, 1000);
  delay(200);
  noTone(buz);
  delay(200);
   tone(buz, 950);
  delay(200); 
   noTone(buz);
  delay(200);   
  }

else if(distancia <20){
    digitalWrite(Led1, HIGH);
    digitalWrite(Led2, HIGH);
    digitalWrite(Led3, LOW);
}

else if(distancia <30){
    digitalWrite(Led1, HIGH);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
}

else{
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
}

delay(100);
}
