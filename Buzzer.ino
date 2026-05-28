const int bip = 12;

void setup() {

pinMode(bip, OUTPUT);
}

void loop() {
tone(bip, 1000);
delay(500);
noTone(bip);
delay(500);
}
