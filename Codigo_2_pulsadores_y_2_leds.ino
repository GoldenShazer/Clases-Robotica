const int Pulsador = 12;
const int Pulsador_2 = 4;
const int LEDGREEN = 10;
const int LEDRED = 7;
void setup() {
pinMode(Pulsador, INPUT);
pinMode(Pulsador_2, INPUT);
pinMode(LEDGREEN, OUTPUT);
pinMode(LEDRED, OUTPUT);
}

void loop() {
int estadoPull = digitalRead (Pulsador);
int estadoPull2 = digitalRead (Pulsador_2);
if (estadoPull == 0) {
 digitalWrite(LEDGREEN, 1);
}
else {
  digitalWrite(LEDGREEN, 0);
}
if (estadoPull2 == 0) {
  digitalWrite(LEDRED, 1);
}
else{
  digitalWrite(LEDRED,0);
}
}
