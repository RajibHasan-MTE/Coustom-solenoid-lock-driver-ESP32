# Custom Solenoid Lock Driver with ESP32

This project demonstrates **how to control a solenoid lock using ESP32 with a custom driver**.  
The main focus of this project is designing and using **your own custom driver board** instead of a generic relay or driver.  
This approach lets you handle higher current, voltage, and back- emf safely while retaining full control over your hardware.

---

## 🔹Features

✅ **Custom driver board:** Transistor/MOSFET + Diode + resistor components.  
✅ **Controlled by ESP32:** GPIO signals activate or deactivate the solenoid.  
✅ **Safe and reliable:** Flyback diode to absorb back- emf and protect circuits.  
✅ **Scalable:** Easily adaptable to other actuators with small modifications.

---

## 🔹Hardware

- **ESP32 MCU**
- **Custom driver board**
- **12V solenoid lock**
- **Flyback Diode**
- **Transistor/MOSFET**
- **Resistors**
- **General components:** breadboard, wires, power supply

---

## 🔹File Structure

	├── code/
	│ └─ main_code.ino
	├── schematic/
	│ └─ custom_driver_schematic.jpg
	├── photos/
	│ ├─ photo1.jpg
	│ ├─ photo2.jpg
	│ └─ photo3.jpg
	├── README.md
	├── LICENSE


---

## 🔹How It Works

- The ESP32 controls a GPIO pin HIGH or LOW.
- The custom driver, a simple low-side switching circuit, converts this control into sufficient current to activate or deactivate the solenoid.
- The flyback diode safely dissipates back- emf when the solenoid is switched off.

---

## 🔹How To Use

1️⃣ Wire the custom driver to the ESP32's GPIO and 12V power supply.  
2️⃣ Compile and upload the code from `code/` directory to your ESP32.  
3️⃣ Activate or deactivate the solenoid by changing the GPIO output.  

---

## 🔹Photos

![Custom driver photo 1](photos/photo1.jpg)  
![Custom driver photo 2](photos/photo2.jpg)  

---

## 🔹License

This project is licensed under the **MIT License** — see [LICENSE](LICENSE) for details.

---

🚀 If you find this useful, please **star** this repository and **contribute** by adding your own tweaks or improvements!

