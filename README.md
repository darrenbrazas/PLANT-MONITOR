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
| DHT11 Sensor           | Digital Pin 2      |
| BH1750 Light Sensor    | A4 (SDA), A5 (SCL) |
| Soil Moisture Sensor   | Analog Pin A0      |
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
