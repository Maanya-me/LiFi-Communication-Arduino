# LiFi Communication using Arduino

**Overview:**  
This project demonstrates a basic LiFi (Light Fidelity) communication system using Arduino.  
In this setup, data is transmitted using an LED and received using a light sensor such as an LDR or photodiode.  
The LED rapidly switches ON and OFF to represent data, and the receiver detects these changes in light intensity.

The purpose of this project is to understand how visible light can be used for wireless communication.

**Features:**

- Demonstrates wireless communication using visible light  
- Uses simple LED transmitter and light sensor receiver  
- Shows how data can be encoded and detected using Arduino  
- Easy to understand implementation for beginners

**Components Used:**

- Arduino Uno (2 boards recommended)  
- LED  
- LDR / Photodiode  
- 220Ω resistor  
- Breadboard  
- Jumper wires  

**Working Principle:**

In LiFi communication, information is transmitted using light signals.  
The LED acts as the transmitter and switches on and off very quickly to send data.

On the receiving side, the light sensor detects the changes in light intensity.  
The Arduino reads these signals and processes them to determine whether light is present or not.

**Project Files:**

- **transmitter.ino** – Arduino code for transmitting data using LED  
- **receiver.ino** – Arduino code for receiving light signals using a sensor  

**Future Improvements:**

- Implement full message decoding instead of simple signal detection  
- Increase transmission speed  
- Use photodiode for better signal detection  
- Add filtering to reduce noise from ambient light
