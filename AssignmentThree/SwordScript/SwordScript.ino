// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(2, OUTPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  if (analogRead(A1) > 5) {
    digitalWrite(2, HIGH);
  }
  if (analogRead(A2) > 5) {
    digitalWrite(2, HIGH);
  }
  if (analogRead(A3) > 5) {
    digitalWrite(2, HIGH);
  }
  if (analogRead(A1) <= 5 && (analogRead(A2) <= 5 && analogRead(A3) <= 5)) {
    digitalWrite(2, LOW);
  }
}