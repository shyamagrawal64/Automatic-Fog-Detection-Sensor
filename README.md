# Automatic Fog Detection Sensor  

## Overview  
This project is designed to detect fog using an **Arduino Uno, DHT11 sensor, and LDR module**. The system turns on an **LED** when it detects fog based on **humidity, temperature, and light intensity**. If a **relay module** is added, it can even control a **car heater** automatically to clear fog.  

## Components Used  
- **Microcontroller:** Arduino Uno  
- **Sensors:**  
  - **DHT11** – Measures humidity and temperature  
  - **LDR Module** – Detects light intensity  
- **Output:** LED Indicator  
- **Power Supply:** USB (Connected directly to a laptop)  

## Connections  
### **DHT11 Sensor:**  
- VCC → 5V (Arduino)  
- GND → GND (Arduino)  
- Data → D2 (Arduino)  

### **LDR Module:**  
- VCC → 5V (Arduino)  
- GND → GND (Arduino)  
- D0 → D3 (Arduino)  

### **LED Indicator:**  
- Anode (+) → D4 (Arduino)  
- Cathode (-) → GND (Arduino)  

## Fog Detection Conditions  
### **LED ON (Fog Detected)**  
✅ **Fog is detected** if all these conditions are met:  
- **LDR Value:** HIGH (Low visibility)  
- **Humidity:** Greater than 70%  
- **Temperature:** Between 5°C and 30°C  

### **LED OFF (No Fog)**  
❌ **No fog detected** if at least one of these conditions fails:  
- **LDR Value:** LOW (Clear visibility)  
- **Humidity:** 70% or lower  
- **Temperature:** Out of range (below 5°C or above 30°C)  

Future Enhancement: Car Heater Integration
By adding a relay module, this system can automatically turn on a car heater when fog is detected.
This would help in clearing windshield fog for better visibility while driving.

How to Use:
Connect the components as per the circuit description.
Upload the code to Arduino Uno using the Arduino IDE.
Open the Serial Monitor (9600 baud rate) to view real-time sensor readings.
Observe the LED turning ON/OFF based on fog conditions.
Contributors
Shyam Agrawal and 
Harshit Arora
