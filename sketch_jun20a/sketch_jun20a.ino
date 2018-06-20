int ledpin = 13;
int intpin = 2;
int state = 0;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(ledpin, INPUT);
  digitalWrite(ledpin, state);
  attachInterrupt(0, int0, LOW);

}

void loop() {
  digitalWrite(ledpin, state);
}
void int0() {
  state = !state;
}
