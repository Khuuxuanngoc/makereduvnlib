// Đặt tên cho chân kết nối Module
#define SIG_PIN 11     // Digital pin connected to the module

int buttonValue = 0;  // Biến lưu giá trị của module
                              
void setup()
{
  // Khởi động kết nối Serial UART ở tốc độ 115200 để truyền dữ liệu lên máy tính.
  // Start the Serial UART connection at 115200 to transfer data to the computer.
  Serial.begin(115200);
}

void loop()
{
  // Đọc giá trị nút nhấn
  // read the digital in value:
  buttonValue = digitalRead(SIG_PIN);

  // Hiển thị giá trị đo được của nút nhấn lên máy tính.
  // Show the button value on Arduno Serial Monitor
  Serial.print("Value: ");
  Serial.println(buttonValue);
  
  // Chờ 500ms
  // Wait 500ms
  delay(500);
}