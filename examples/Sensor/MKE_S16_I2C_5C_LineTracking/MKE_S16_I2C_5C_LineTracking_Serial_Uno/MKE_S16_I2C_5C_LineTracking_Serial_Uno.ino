// Thêm bộ thư viện
// Add the library.
#include "MKE_I2C_5C_LineTracking.h"

MKE_I2C_5C_LineTracking LineFollowSensor;

void setup()
{
  // Khởi động kết nối Serial UART ở tốc độ 115200 để truyền dữ liệu lên máy tính.
  // Start the Serial UART connection at 115200 to transfer data to the computer.
  Serial.begin(115200);

  LineFollowSensor.setup(0x2A);
}

void loop()
{
  /************ SENSOR *************/
    /*-------------------------------*/
    /* |LEFT| P1 P2 P3 P4 P5 |RIGHT| */
    /*     0b 1  1  1  1  1          */
    /*         0: White;             */
    /*         1: Black              */
    /*-------------------------------*/
  // Đọc giá trị cảm biến
  // Get value
  LineFollowSensor.getData();

  // Hiển thị giá trị đo được của cảm biến lên máy tính.
  // Show the sensor value on Arduno Serial Monitor
  Serial.print("P1:");
  Serial.print(LineFollowSensor.getValue(0));
  Serial.print(" P2:");
  Serial.print(LineFollowSensor.getValue(1));
  Serial.print(" P3:");
  Serial.print(LineFollowSensor.getValue(2));
  Serial.print(" P4:");
  Serial.print(LineFollowSensor.getValue(3));
  Serial.print(" P5:");
  Serial.print(LineFollowSensor.getValue(4));

  Serial.print(" data:");
  Serial.println(LineFollowSensor.getValue(), BIN);
  
  // Chờ 100ms
  // Wait 100ms
  delay(100);
}