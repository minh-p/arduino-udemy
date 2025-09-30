void setup() {
  // Using a digital pin: set LED pin to output.
  // The board contain digital pins that can be used as an input or output.
  // They can send data as control signals or inputs to read data.
  Serial.begin(9600);
  Serial.println("Hello World");
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly.

  // power on the led

  digitalWrite(13, HIGH);
  Serial.println("LED ON");
  delay(1000);
  // power off the led
  digitalWrite(13, LOW);
  delay(1000);

  Serial.println("LED OFF");
}
