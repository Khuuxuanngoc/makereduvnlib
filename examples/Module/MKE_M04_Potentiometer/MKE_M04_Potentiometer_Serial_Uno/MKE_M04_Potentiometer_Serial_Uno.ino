// Define the pin for the potentiometer
#define POT_PIN A1

void setup() {
  // Initialize Serial connection
  Serial.begin(115200);
}

void loop() {
  // Read the potentiometer value
  int potValue = analogRead(POT_PIN);

  // Display the value on the LCD
  
  Serial.println("Pot Value: ");
  Serial.println(potValue);

  // Send the value to the Serial Monitor
  Serial.println(potValue);

  // Wait 500ms
  delay(500);
}