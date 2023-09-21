int LED = 3;
int PULSADOR = 2;
int ESTADO = LOW;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(PULSADOR, INPUT);
}

void loop() {
  if(digitalRead(PULSADOR) == LOW) {
    digitalWrite(LED, LOW);
  } else {
    digitalWrite(LED, HIGH);
  }
}
