int ledPins[2] = { 13, 14 };

void setup() {
  // put your setup code here, to run once:

  for (int i = 0; i < 2; i++) {
  pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i < 2; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(500);
    digitalWrite(ledPins[i], LOW);
  }
}
