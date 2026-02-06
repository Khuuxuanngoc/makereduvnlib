#include "MKE_DS18B20.h"
// Đặt tên cho chân kết nối cảm biến
#define DS18B20_PIN 23     // IO23-D11 on Vietduino ESP32 (D11 on MakerEdu Shield)

OneWire oneWire_11(DS18B20_PIN);
MKE_DS18B20 sensor(&oneWire_11);

// Tạo biến lưu giá trị cảm biến
// value read from the sensor
float sensorValue1 = 0;

void setup()
{
  // Khởi động kết nối Serial UART ở tốc độ 115200 để truyền dữ liệu lên máy tính.
  // Start the Serial UART connection at 115200 to transfer data to the computer.
  Serial.begin(115200);

  sensor.begin();
}

void loop()
{
  // Đọc giá trị cảm biến
  // Get value
  sensor.requestTemperatures();
  sensorValue1 = sensor.getTempC();

  // Hiển thị giá trị đo được của cảm biến lên máy tính.
  // Show the sensor value on Arduno Serial Monitor
  Serial.print("Temp: ");
  Serial.println(sensorValue1);
  
  // Chờ 2000ms
  // Wait 2000ms
  delay(2000);
}