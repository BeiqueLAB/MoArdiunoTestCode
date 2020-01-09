void setup() {
  pinMode(3, OUTPUT);    // sets the digital pin 13 as output
}

void loop() {
  digitalWrite(3, HIGH); // sets the digital pin 13 on
  delay(50);            // waits for a second
  digitalWrite(3, LOW);  // sets the digital pin 13 off
  delay(1000);            // waits for a second
}
