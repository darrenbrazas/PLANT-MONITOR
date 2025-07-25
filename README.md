# PLANT-MONITOR

## Overview

This personal project is an Arduino based Plant Monitoring System that tracks key environmental factors to help maintain healthy plant growth. It measures the temperature, humidity, soil moisture, and light intensity. It displays this data on an OLED screen for live feedback.

## Objectives

- Learn how to implement DHT, BH1750, soil moisture sensors, and SSD1306
- Practice soldering and use of breadboard
- Design a compact, functional system for plant care.
- Document a personal project

## Features

- Temperature and humidity monitoring
- Soil moisture monitoring
- Light intensity monitoring
- OLED, real-time feedback
- Code using Arduino Libraries

## Tools and Technologies

- **Hardware:**
  - Arduino Uno
  - DHT11 Temp & Humidity Sensor
  - BH1750 Light Sensor
  - Soil Moisture Sensor
  - SSD1306 OLED Display
  - Wires and breadboard
  - Soldering wire and iron

- **Wiring:**

| **Component**          | **Arduino Pin**    |
|----------------------|------------------|
| DHT11 Sensor           | D2                 |
| BH1750 Light Sensor    | A4 (SDA), A5 (SCL) |
| Soil Moisture Sensor   | A0                 |
| OLED Display (SSD1306) | A4 (SDA), A5 (SCL) | 
| DHT11 VCC & GND        | 5V, GND            |
| BH1750 VCC & GND       | 5V, GND            |
| Soil Sensor VCC & GND  | 5V, GND            | 
| OLED VCC & GND         | 3.3V, GND          |


- **Software:**
  - Arduino IDE
  - Adafruit_SSD1306 Library
  - Adafruit_GFX library
  - Servo Library
  - Wire Library
  - BH1750 Library
  - DHT Library

## Demo/Images
![topview](https://github.com/user-attachments/assets/aa45bd5d-496b-4530-bc83-8f7f1ac887b4)
![readings](https://github.com/user-attachments/assets/9d0a2c4e-7409-45fc-96ea-58760fcd8b52)
![IMG_8761](https://github.com/user-attachments/assets/3764f8fe-4685-4a02-b062-9967f9d1ed1f)
![IMG_8762](https://github.com/user-attachments/assets/81a8286c-e9d7-4eb2-bcc9-d9d7c6523574)
