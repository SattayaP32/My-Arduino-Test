# Arduino Projects Collection

A collection of my Arduino practice projects and small embedded-system experiments developed using **Arduino IDE**.

These projects cover basic sensors, actuators, traffic control, motor control, environmental monitoring, LCD displays, and simple automation systems.

---

## Software Used

- **Arduino IDE**
- Arduino-compatible development board
- Serial Monitor for viewing sensor values and system status

---

## Project Files

### `Waterpumpsensor.ino`
Controls a water pump using a digital input.  
When triggered, the pump runs for a short countdown period and an indicator output is activated while waiting for the input to reset.

### `WaterPumpFIX.ino`
A water-level control example using **Half** and **Full** input states.  
The program switches outputs according to the detected water level.

### `HowManyPeoplesComingInRow.ino`
A simple people-counting system using two input channels.  
It counts people using each row/channel and displays the total number of users and accumulated values through the Serial Monitor.

### `temperature.ino`
Reads an analog temperature sensor such as **TMP36**, converts the analog value to degrees Celsius, and displays the temperature through the Serial Monitor.

### `vending_machine.ino`
Simulates a basic vending-machine control system.  
It counts inserted coins, waits for the start button, activates an output for a countdown period, and calculates the remaining change.

### `Crosswalk_traffic.ino`
Simulates a pedestrian crosswalk traffic-light system.  
When the button is pressed, the program changes the traffic and pedestrian lights in sequence and performs a countdown.

### `MYHOMIESENSOR.ino`
A simple home sensor automation example.  
The output devices are activated when both sensor/input conditions are detected at the same time.

### `2light_in_house.ino`
Reads an analog sensor value and automatically switches an LED depending on a defined threshold.  
It can be used as a basic automatic-lighting experiment.

### `myservo.ino`
Controls a **servo motor** using the Arduino Servo library.  
The servo repeatedly moves between two predefined angles.

### `Gas_sensor.ino`
Reads an analog gas/smoke sensor value, such as an **MQ-2**, and activates an LED when the sensor value exceeds a defined threshold.

### `LCD_l2c_DHT22.ino`
Uses a **DHT22 temperature/humidity sensor** with an **I2C LCD**.  
The program displays temperature and a counter on the LCD and activates a warning output when the temperature reaches the configured threshold.

### `DC_with_relay_and_Switch.ino`
Controls two outputs for left/right operation using switches.  
The program can be used as a basic example for DC motor or relay direction control.

---

## How to Use

1. Install and open **Arduino IDE**.
2. Open the `.ino` file you want to test.
3. Connect the required sensors, buttons, LEDs, motors, relays, or other components according to the pin assignments in the code.
4. Select the correct **Board** and **Port** in Arduino IDE.
5. Click **Upload** to upload the program to the Arduino board.
6. Open **Serial Monitor** for projects that display sensor values or system status.

---
