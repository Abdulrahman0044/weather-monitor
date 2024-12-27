# Temperature and Humidity Monitoring System with Alert

This project monitors temperature and humidity using a DHT11 sensor and displays the readings on an LCD screen. When the temperature exceeds a predefined threshold (40°C), a buzzer is triggered as an alert.

## Features
- **Temperature and Humidity Monitoring**: Real-time monitoring of environmental conditions using the DHT11 sensor.
- **LCD Display**: Displays temperature (in Celsius) and humidity (as a percentage) on a 16x2 LiquidCrystal display.
- **Overheat Alert**: Triggers a buzzer when the temperature exceeds 40°C.

---

## Components Required
1. **Arduino Board** (e.g., Uno, Mega, etc.)
2. **DHT11 Sensor**
3. **16x2 LCD Display** with I2C or standard pin configuration
4. **Buzzer**
5. **Connecting Wires**
6. **Power Supply**

---

## Pin Configuration
| Component          | Pin Name         | Arduino Pin |
|---------------------|------------------|-------------|
| DHT11 Data         | `DHTPIN`         | 13          |
| LCD RS             | `rs`             | 12          |
| LCD Enable         | `en`             | 11          |
| LCD Data 4         | `d4`             | 5           |
| LCD Data 5         | `d5`             | 4           |
| LCD Data 6         | `d6`             | 3           |
| LCD Data 7         | `d7`             | 2           |
| Buzzer             | `BUZZER_PIN`     | 7           |

---

## Setup Instructions
1. **Hardware Setup**:
   - Connect the DHT11 sensor data pin to Arduino digital pin 13.
   - Wire the 16x2 LCD as per the pin configuration table.
   - Connect the buzzer to digital pin 7.
   - Ensure proper power supply for all components.

2. **Software Setup**:
   - Install the **DHT** library in the Arduino IDE. Go to `Tools > Manage Libraries` and search for "DHT sensor library".
   - Upload the provided code to your Arduino board.

---

## Code Overview
1. **Setup**:
   - Initializes the DHT sensor and LCD display.
   - Sets up the buzzer pin as an output and activates it briefly to indicate the system is ready.

2. **Main Loop**:
   - Reads temperature and humidity values from the DHT sensor.
   - Displays the readings on the LCD screen.
   - Triggers the buzzer if the temperature exceeds 40°C.

---

## Usage
1. Power the Arduino and connected components.
2. Monitor the temperature and humidity readings on the LCD display.
3. Listen for the buzzer alert when the temperature exceeds 40°C.

---

## Customization
- **Threshold Adjustment**: Modify the `if (temp >= 40.0)` condition to change the temperature alert threshold.
- **Display Update**: Enhance the LCD display format or add additional sensor data.

---

## Troubleshooting
- **No Sensor Data**: Ensure the DHT11 sensor is connected correctly and is compatible with your setup.
- **Buzzer Not Triggering**: Verify the temperature threshold and check the buzzer connection.
- **LCD Not Displaying Data**: Double-check the wiring and ensure the `LiquidCrystal` library is correctly installed.

---

## License
This project is licensed under the [Apache License 2.0](LICENSE).

---

Enjoy building and using your Temperature and Humidity Monitoring System!
