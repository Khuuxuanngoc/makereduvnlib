// Define the pin for the potentiometer
#define POT_PIN 34 // IO34-A1 on Vietduino ESP32

void setup() {
  // Initialize Serial connection
  Serial.begin(115200);
}

void loop() {
  // Read the potentiometer value
  int potValue = analogRead(POT_PIN);

  // Send the value to the Serial Monitor
  Serial.println(potValue);

  // Wait 500ms
  delay(500);
}