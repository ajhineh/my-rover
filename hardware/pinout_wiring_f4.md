# نقشه کامل سیم‌بندی و پین‌اوت STM32F407VET6

## اتصالات پورت مشترک SPI1
- PA5 (SCK)  -> مشترک بین DWM1000, ADF4351, LCD (SCK/CLK)
- PA7 (MOSI) -> مشترک بین DWM1000, ADF4351, LCD (MOSI/DATA)
- PA6 (MISO) -> مشترک بین DWM1000, LCD (MISO)

## اتصالات کنترلی GPIO و جانبی Rover
- **ADF4351 LE:** PB0
- **DWM1000 CSN:** PB1
- **DWM1000 RST:** PC4
- **DWM1000 IRQ:** PC5
- **LCD CS:** PA4
- **LCD DC:** PB10
- **LCD RST:** PC1
- **BNO085 IMU (I2C1):** SCL -> PB6 | SDA -> PB7
- **ESP32 Wi-Fi (USART2):** TX -> PA2 | RX -> PA3
- **AD8302 Detector (ADC1):** VMAG -> PA0 (IN0) | VPHS -> PA1 (IN1)
- **Audio Output (DAC1):** Output -> PA4

## پین‌اوت لنگرها (ESP8266 to DWM1000)
- SCK  -> D5 (GPIO14)
- MOSI -> D7 (GPIO13)
- MISO -> D6 (GPIO12)
- CSN  -> D8 (GPIO15)
- IRQ  -> D1 (GPIO5)
- RST  -> D2 (GPIO4)