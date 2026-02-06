#include <MKE_HCSR04.h>
// Đặt tên cho chân kết nối cảm biến
#define TRIG_PIN 13
#define ECHO_PIN 12

// Cấu hình chân kết nối tín hiệu cho cảm biến.
// Configure the signal connection pins for the sensor.
MKE_HCSR04 ultra(TRIG_PIN, ECHO_PIN);

// Tạo biến số nguyên lưu giá trị cảm biến
// value read from the sensor
float sensorValue = 0;  

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
  sensorValue = ultra.dist();

  // Truyền khoảng cách đo được của cảm biến lên máy tính.
  // Show the sensor value on Arduno Serial Monitor
  Serial.print("Value: ");
  Serial.println(sensorValue);
  
  // Chờ 200ms
  // Wait 200ms
  delay(200);
}
