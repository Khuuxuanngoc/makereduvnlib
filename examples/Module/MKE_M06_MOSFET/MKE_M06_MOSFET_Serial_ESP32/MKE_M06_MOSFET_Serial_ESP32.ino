// Đặt tên cho chân kết nối Module
#define SIG_PIN 5     // IO5-D10 on Vietduino ESP32

void setup()
{
  // Khởi động kết nối Serial UART ở tốc độ 115200 để truyền dữ liệu lên máy tính.
  // Start the Serial UART connection at 115200 to transfer data to the computer.
  Serial.begin(115200);

  // Cấu hình đây là chân Digital Output.
  // Config this is Digital Output.
  pinMode(SIG_PIN, OUTPUT);
}

void loop()
{
  // Bật.
  // Turn on.
  digitalWrite(SIG_PIN, HIGH);

  // Hiển thị giá trị của module lên máy tính.
  // Show the module value on Arduno Serial Monitor
  Serial.println("ON");
  
  // Chờ 1000ms
  // Wait 1000ms
  delay(1000);

  // Tắt.
  // Turn off.
  digitalWrite(SIG_PIN, LOW);

  // Hiển thị giá trị của module lên máy tính.
  // Show the module value on Arduno Serial Monitor
  Serial.println("OFF");
  
  // Chờ 1000ms
  // Wait 1000ms
  delay(1000);
}