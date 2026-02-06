#include "MKE_OneButton.h"

// Đặt tên cho chân kết nối Module
#define SIG_PIN 23     // IO23-D11 on Vietduino ESP32

// Khai báo module.
// Declare module.
MKE_OneButton btn = MKE_OneButton(
    SIG_PIN, // Cấu hình đây là chân Digital Input.
    true,       // Nút nhấn kích hoạt LOW.
    false       // Kích hoạt điện trở nội "Pull-Up".
);

void setup()
{
  // Khởi động kết nối Serial UART ở tốc độ 115200 để truyền dữ liệu lên máy tính.
  // Start the Serial UART connection at 115200 to transfer data to the computer.
  Serial.begin(115200);

  // Khởi tạo module
  // init module
  btn.attachClick(myClickEvent);
  btn.attachDoubleClick(myDoubleClickEvent);
}

void loop()
{
  // Lấy giá trị module
  // Get data module
  btn.tick();
}

void myClickEvent(){
  // Hiển thị giá trị của module lên máy tính.
  // Show the module value on Arduno Serial Monitor
  Serial.println("Click");
}

void myDoubleClickEvent(){
  // Hiển thị giá trị của module lên máy tính.
  // Show the module value on Arduno Serial Monitor
  Serial.println("2x Click");
}