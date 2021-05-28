#define RED_PIN 9
#define BLUE_PIN 12

void setup() {
  pinMode(RED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(RED_PIN, HIGH);
  delay(500);
  digitalWrite(RED_PIN, LOW);
  delay(500);
  digitalWrite(BLUE_PIN, HIGH);
  delay(500);
  digitalWrite(BLUE_PIN, LOW);
  delay(500);
}
