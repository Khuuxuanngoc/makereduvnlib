// Define the pin for the relay
#define RELAY_PIN 5 // IO5-D10 on Vietduino ESP32

void setup() {
  // Initialize Serial connection
  Serial.begin(115200);

  // Set the relay pin as output
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  // Turn the relay on
  digitalWrite(RELAY_PIN, HIGH);
  
  Serial.println("Relay: ON");
  delay(1000);

  // Turn the relay off
  digitalWrite(RELAY_PIN, LOW);
  
  Serial.println("Relay: OFF");
  delay(1000);
}