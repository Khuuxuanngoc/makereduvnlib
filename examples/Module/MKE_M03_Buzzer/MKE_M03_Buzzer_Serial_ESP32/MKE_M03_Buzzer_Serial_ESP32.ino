// Define the pin for the buzzer
#define BUZZER_PIN 5 // IO5-D10 on Vietduino ESP32

void setup() {
  // Initialize Serial connection
  Serial.begin(115200);

  // Set the buzzer pin as output
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // Turn the buzzer on
  
  digitalWrite(BUZZER_PIN, HIGH);
  Serial.println("Buzzer ON");
  delay(1000);

  // Turn the buzzer off
  digitalWrite(BUZZER_PIN, LOW);
  Serial.println("Buzzer OFF");
  delay(1000);
}