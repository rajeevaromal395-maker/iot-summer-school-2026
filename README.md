# iot-summer-school-2026
Name: Aromal R S
Roll Number:24

Project Description:
This project serves as a comprehensive repository for the IoT Summer School 2026 curriculum. It documents my progress through weekly assignments and the development of the final capstone project. All code and documentation are maintained here for tracking and version control purposes.
Project: Potentiometer-Controlled LED Blink
Hardware Required
Arduino Uno (or compatible board)

1x LED (5mm)

1x 220Ω Resistor

1x 10kΩ Potentiometer

Breadboard and Jumper wires

USB Cable (Type A to B)

Circuit Diagram Description
LED: Connect the Anode (long leg) to digital pin 13 via the 220Ω resistor. Connect the Cathode (short leg) to the GND pin.

Potentiometer: Connect the outer pins to 5V and GND. Connect the middle pin (wiper) to Analog pin A0.

How to Upload Code
Connect your Arduino board to your computer using the USB cable.

Open the Arduino IDE.

Go to Tools > Board and select your Arduino model.

Go to Tools > Port and select the correct COM port.

Copy the code from blink.ino and paste it into the IDE.

Click the Upload button (arrow icon).

Expected Output
The LED will blink at a rate determined by the rotation of the potentiometer.

Turning the potentiometer will decrease or increase the delay time.

Open the Serial Monitor (set to 9600 baud) to see the Blink count incrementing with each cycle.

Troubleshooting Tips
LED not blinking? Check the orientation of the LED; the short leg must connect to GND.

Serial Monitor shows garbage data? Ensure the baud rate in the bottom right corner of the Serial Monitor is set to 9600.

Blink speed doesn't change? Ensure the potentiometer middle pin is securely connected to the A0 analog input pin, not a digital pin.
