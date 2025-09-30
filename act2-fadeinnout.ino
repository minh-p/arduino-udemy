void setup() {
  // Using a digital pin: set LED pin to output.
  // The board contain digital pins that can be used as an input or output.
  // They can send data as control signals or inputs to read data.
  Serial.begin(9600);
  Serial.println("Hello World");
  pinMode(11, OUTPUT);
}

void loop() {
  Serial.println("Fade in and fade out");

  // fade in
  for (int i = 0; i <= 255; i++) {
    analogWrite(11, i);
    delay(5);
    Serial.println("Fading in...");
  }
  // fade out

  for (int i = 255; i >= 0; i--) {
    analogWrite(11, i);
    delay(5);
    Serial.println("Fading out...");
  }
}
