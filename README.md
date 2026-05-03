# Homey

Homey is a compact home automation controller designed for residential use, while also being capable of operating as an industrial-style PLC for control and monitoring tasks.

The project combines Ethernet connectivity, isolated digital I/O, relay outputs, and flexible power input in a single hardware platform built around ESP32.

---

## Hardware Features

* **ESP32-based architecture** for wireless communication, local control logic, and future expansion.
* **Ethernet with PoE support** for reliable wired connectivity and simplified installation.
* **4 digital inputs** for external sensors, switches, and automation signals.
* **4 digital outputs** based on relays for switching external loads.
* **5 onboard LEDs** used for status indication, diagnostics, and visual feedback.
* **Input voltage up to 24V** for industrial and field applications.
* **5V relay section** powered separately while maintaining compatibility with higher external voltages.
* **USB-C power support** for development, testing, and low-voltage standalone operation.
* **Optocoupler isolation** allowing safe interfacing with higher voltage external circuits.

---

## Electrical Design Notes

The board is divided into functional sections.

High-voltage and switching circuitry are separated from the low-voltage logic domain in order to improve stability, reduce electrical noise, and increase operational safety.

Special attention was given to routing of high-speed and differential signals such as:

* Ethernet TX / RX
* USB D+ / D−

Component placement and routing were performed with signal integrity and practical manufacturability in mind.

---

## Firmware

The firmware has been completed and provides the basic control layer for the board.

The current software handles:

* digital input reading
* relay output control
* status LED logic
* Ethernet communication foundation

The architecture was kept clean and modular to allow future expansion for everyone - you do what you want :).

A future direction of development is communication between multiple boards using **ESP-NOW**, enabling distributed control nodes over larger areas (2/3km).

---

## Project Images

### 3D Model



<img width="1920" height="1080" alt="Render" src="https://github.com/user-attachments/assets/1f34a8f8-d059-4134-92b8-8e279f73affa" />


### Schematic

<img width="5100" height="3900" alt="image" src="https://github.com/user-attachments/assets/881a7b27-5106-47e3-84f9-90d3249b22b7" />


### PCB Layout / Routed Board

<img width="812" height="708" alt="Zrzut ekranu 2026-05-03 140522" src="https://github.com/user-attachments/assets/282b76a3-7470-4df4-8b28-8c91791788bd" />


---

## Project Status

The project is currently considered **complete**.

Remember, if you copy it. Mention me :) i will check that.

---



## License
Just do not consider this project as your own :)
