/**
 * Example of using MKE M15 Bluetooth module with Uno and Smartphone App
 * Link Download Dabble App:
 *  - Android: https://play.google.com/store/apps/details?id=io.dabbleapp&hl=en-US
 *  - iOS: https://apps.apple.com/us/app/dabble-bluetooth-controller/id1472734455
 * 
 * Sau khi tải App Dabble về điện thoại, bạn có thể kết nối với module MKE M15 Bluetooth
 * thông qua giao diện Bluetooth của điện thoại. Tên thiết bị Bluetooth sẽ là "M0015_xxxx" hoặc "M0015_xxxx_B"
 *      Trong đó "xxxx" là 4 ký tự cuối của địa chỉ MAC của module. Hậu tố "B" là BLE mode.
 *        VD: M0015_7AE8  hoặc M0015_7AE8_B
 * 
 * Chọn GamePad trong App Dabble để điều khiển các phím ảo trên điện thoại.
 */

#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include "MKE_Dabble.h"

#define TX_PIN 12
#define RX_PIN 13

// Khai báo module.
// Declare module.
SoftwareSerial mySoftwareSerial(RX_PIN, TX_PIN);
MKE_M15_SSerial(mySoftwareSerial);

String value;

void setup()
{
  // Khởi động kết nối Serial UART ở tốc độ 115200 để truyền dữ liệu lên máy tính.
  // Start the Serial UART connection at 115200 to transfer data to the computer.
  Serial.begin(115200);
  Serial.println("Start");

  // Khởi tạo module
  // init module
  MKE_M15.setBaudrate(9600); // safe speed for SoftwareSerial is 9600
  mySoftwareSerial.begin(9600);
  Dabble.begin(mySoftwareSerial);
  
}

void loop()
{
  Dabble.processInput();

  Serial.print("KeyPressed: ");
  if (GamePad.isUpPressed())
  {
    Serial.print("UP");
  }

  if (GamePad.isDownPressed())
  {
    Serial.print("DOWN");
  }

  if (GamePad.isLeftPressed())
  {
    Serial.print("Left");
  }

  if (GamePad.isRightPressed())
  {
    Serial.print("Right");
  }

  if (GamePad.isSquarePressed())
  {
    Serial.print("Square");
  }

  if (GamePad.isCirclePressed())
  {
    Serial.print("Circle");
  }

  if (GamePad.isCrossPressed())
  {
    Serial.print("Cross");
  }

  if (GamePad.isTrianglePressed())
  {
    Serial.print("Triangle");
  }

  if (GamePad.isStartPressed())
  {
    Serial.print("Start");
  }

  if (GamePad.isSelectPressed())
  {
    Serial.print("Select");
  }
  Serial.print('\t');

  int a = GamePad.getAngle();
  Serial.print("Angle: ");
  Serial.print(a);
  Serial.print('\t');
  int b = GamePad.getRadius();
  Serial.print("Radius: ");
  Serial.print(b);
  Serial.print('\t');
  float c = GamePad.getXaxisData();
  Serial.print("x_axis: ");
  Serial.print(c);
  Serial.print('\t');
  float d = GamePad.getYaxisData();
  Serial.print("y_axis: ");
  Serial.println(d);
  Serial.println();

  // Chờ 50ms
  // Wait 50ms  
  delay(50);
}