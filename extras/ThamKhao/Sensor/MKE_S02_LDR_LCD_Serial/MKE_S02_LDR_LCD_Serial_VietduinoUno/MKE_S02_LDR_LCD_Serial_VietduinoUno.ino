// Đặt tên cho chân kết nối cảm biến
// These constants won't change. They're used to give names to the pins used:
const int analogInPin = A1;  // Vietduino Uno: Analog input pin A1

// Tạo biến số nguyên lưu giá trị cảm biến
// value read from the sensor
int sensorValue = 0;  

void setup()
{
  // Khởi động kết nối Serial UART ở tốc độ 115200 để truyền dữ liệu lên máy tính.
  // Start the Serial UART connection at 115200 to transfer data to the computer.
  Serial.begin(115200);
}

void loop()
{
  // Đọc giá trị cảm biến
  // read the analog in value:
  sensorValue = analogRead(analogInPin);

  // Hiển thị giá trị đo được của cảm biến lên máy tính.
  // Show the sensor value on Arduno Serial Monitor
  Serial.print("Value: ");
  Serial.println(sensorValue);
  
  // Chờ 500ms
  // Wait 500ms
  delay(500);
}
