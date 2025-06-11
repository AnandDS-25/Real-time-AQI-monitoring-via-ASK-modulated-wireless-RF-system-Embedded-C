
![proj](https://github.com/user-attachments/assets/062c6eba-98a1-4fcd-a826-27a6db4b2bbd)

# 🛰️ Ultrasonic Sensor-Based AQI Estimation using RF Modules

This project simulates Air Quality Index (AQI) estimation using an HC-SR04 ultrasonic sensor. The sensor measures proximity or crowd density, and this distance is used as a proxy to estimate PM concentration levels. The data is transmitted wirelessly using 433 MHz RF modules, and the receiver estimates and displays the air quality level.

## 📦 Project Structure

- **Transmitter**: Measures distance using the ultrasonic sensor and sends it via RF transmitter using the RadioHead ASK library.
- **Receiver**: Receives the data and optionally maps the distance to PM concentration using a linear regression model trained in Python.
- **Calibration Script**: A Python script is included to generate a regression model that maps distance (cm) to PM values based on sample data.

## 🛠️ Hardware Used

- Arduino UNO/Nano (2 units)
- HC-SR04 Ultrasonic Sensor
- 433 MHz RF Transmitter and Receiver modules
- Jumper wires and breadboard

## 🧠 Key Features

- Wireless transmission of environmental data using ASK modulation
- Linear regression-based calibration for simulating PM concentration
- Serial Monitor output for real-time monitoring
- Expandable for smart bins, crowd density estimation, or traffic analysis demos

## 📊 Software Components

- Arduino IDE for writing and uploading code to microcontrollers
- Python with scikit-learn and matplotlib for calibration and analysis
- RadioHead library for RF communication

## 📚 Libraries Required

- RadioHead (for Arduino RF communication)
- scikit-learn (for Python-based PM vs. distance modeling)
- matplotlib (for plotting calibration curves)

## 🚀 Applications

- Simulated Air Quality Monitoring
- Smart City Demonstration Projects
- IoT Prototyping and Wireless Sensing
- Educational Projects on Wireless Communication and Sensor Integration

## 🔗 License

This project is licensed under the MIT License. You are free to use, modify, and distribute this project with proper attribution.

