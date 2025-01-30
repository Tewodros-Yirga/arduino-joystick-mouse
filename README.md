# Arduino Joystick Mouse

## Description
This project turns an Arduino board and joystick into a mouse emulator that controls the cursor on your screen using Python.

## Hardware Requirements
- Arduino Uno (or any compatible Arduino board)
- Joystick module
- Jumper wires
- Breadboard (optional)

## Software Requirements
- Arduino IDE (version 1.x or above)
- Python 3.x
- Python libraries:  `pyautogui`

## Installation Instructions
1. Upload the Arduino code (`joystick_mouse.ino`) to your Arduino board using the Arduino IDE.
2. Install the required Python libraries:
   pip install pyautogui
3. Run the Python script (mouse_control.py) to start using the joystick as a mouse.

## Usage Instructions
- Plug the Arduino into your computer.
- Launch the Python script and start moving the joystick to control the mouse.