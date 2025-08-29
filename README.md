# Ultrasonic Sensor + Servo Safety System  
*(Accident Prevention for Railway and Road Tracks)*

## 📌 Overview
This project demonstrates a **safety barrier prototype** using an **HC-SR04 ultrasonic sensor** and a **servo motor**.  
The system detects obstacles within a certain distance and automatically moves the servo to simulate a **barrier closing**, 
helping prevent accidents on **railway crossings** and **road tracks**.

---

## ✨ Features
- 🚦 Detects objects using an ultrasonic sensor  
- 🛑 If an object is within 20 cm, servo rotates to 90° (barrier closed)  
- ✅ If no object is detected, servo resets to 0° (barrier open)  
- 📝 Serial Monitor logs distance + detection status  
- 💡 Low-cost prototype for accident prevention systems  

---

## 🛠️ Technical Details
- **Hardware**: Arduino UNO/Nano, HC-SR04 Ultrasonic Sensor, SG90 Servo Motor  
- **Pins Used**:  
  - Servo → Pin 9  
  - Ultrasonic Trigger → Pin 10  
  - Ultrasonic Echo → Pin 11  
- **Libraries**: `Servo.h`  
- **Language**: Arduino C++  

---

## ⚙️ How It Works
1. Ultrasonic sensor continuously measures distance.  
2. If an object is closer than **20 cm**, the servo rotates to 90° (barrier closes).  
3. If no object is detected, the servo resets to 0° (barrier open).  
4. Serial Monitor outputs distance and detection status.  

---

## 📚 Educational Value
This project demonstrates:  
- Sensor integration (HC-SR04 for distance measurement)  
- Actuator control (servo motor as barrier)  
- Embedded systems programming with Arduino  
- Real-world application in **railway/road safety**  

---

## 🎓 Portfolio Relevance
This project reflects problem-solving in **IoT, robotics, and safety systems**.  
It is suitable for **NUS/NTU admission portfolios** as it shows both **technical skills** and **real-world application focus**.  

---

## ⚠️ Disclaimer
This project is a **prototype demonstration**.  
For real deployment, stronger motors, more reliable sensors, and additional safety mechanisms are required.
