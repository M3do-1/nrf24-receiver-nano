# NRF24L01 Receiver – Arduino Nano

This project sets up an Arduino Nano as a wireless receiver using an NRF24L01 module. It listens for control packets from a paired transmitter, parses the incoming data, and displays the values via the Serial Monitor.

If no packet is received within 500 milliseconds, the receiver triggers a failsafe and sets all control values to zero — critical for use in RC, robotics, or safety-sensitive wireless systems.

## Features
- NRF24L01 radio communication
- Custom control packet parsing
- 500ms timeout-based failsafe
- Serial output for debugging or integration
