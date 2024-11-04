const int buttonPin = 26;
void loop() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  int buttonState = digitalRead(buttonPin);
  Serial.print("Tombol di tekan: ");
  if (buttonState == HIGH) {
    Serial.println("YA");
  } else {
    Serial.println("TIDAK");}
  delay(100);
}