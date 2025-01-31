# ESP32-Explorer

## Overview
A collection of ESP32 projects featuring sensor integrations and BLE scanning capabilities. Explore IoT applications, environmental monitoring, and wireless connectivity with ESP32. 🚀🔧
This repository contains various **ESP32-DevKitV1** projects that integrate different sensors and BLE scanning capabilities. The projects are developed using **Arduino IDE** for easy setup and deployment.

## Getting Started

### 1. Setting Up ESP32 with Arduino IDE
To start programming your **ESP32-DevKitV1**, follow these steps:

- **Install Arduino IDE**: [Download here](https://www.arduino.cc/en/software)
- **Add ESP32 Board to Arduino IDE**: Follow the official guide [here](https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html)
- **Select the Board**: In **Tools** → **Board** → Select **ESP32 Dev Module**
- **Install Required Libraries**: Ensure you install sensor-specific libraries via Arduino Library Manager

### 2. Hardware Used

The following sensors are integrated into the projects:

| Sensor      | Function                           | Library Required |
|------------|-----------------------------------|------------------|
| **DHT22**  | Temperature & Humidity            | [Adafruit DHT Sensor Library](https://github.com/adafruit/DHT-sensor-library) |
| **BME280** | Pressure, Temperature, Humidity   | [Adafruit BME280 Library](https://github.com/adafruit/Adafruit_BME280_Library) |
| **HC-SR04** | Ultrasonic Distance Measurement  | [NewPing Library](https://bitbucket.org/teckel12/arduino-new-ping/wiki/Home) |
| **MPU6050** | Accelerometer & Gyroscope       | [MPU6050 Library](https://github.com/ElectronicCats/mpu6050) |
| **BLE Scanner** | Detect BLE devices          | [ESP32 BLE Arduino](https://github.com/nkolban/ESP32_BLE_Arduino) |

### 3. Uploading the Code
1. Connect ESP32 via USB  
2. Select the correct **COM port** in Arduino IDE  
3. Open the project sketch (`.ino` file)  
4. Click **Upload** and wait for it to complete  

## Projects Included
- **ESP32 Temperature Monitor** – Read and display temperature from **DHT22**

## Contributing
Feel free to contribute new sensor integrations or improve existing projects!

