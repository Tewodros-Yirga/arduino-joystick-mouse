import serial
import pyautogui

pyautogui.FAILSAFE = False
port = serial.Serial("COM13",9600)

while True:
    line = port.readline()
    if line:
        string = line.decode()
        if "x" in string:
            data1 = string.replace("x","")
            data1=int(data1)
            print(data1)
        elif "y" in string:
            data2 = string.replace("y","")
            data2=int(data2)
            print(data2)
            pyautogui.moveTo(data2,data1,duration=0.001)
        elif "#" in string:
            data3 = string.replace("#","")
            data3=int(data3)
            if data3==6:
                pyautogui.click()