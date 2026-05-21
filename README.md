# Free_RTOS_Demo
 Basic demonstration of real-time multitasking on Arduino Uno using FreeRTOS, where two independent tasks blink two LEDs at different delays simultaneously.

# Overview
In normal Arduino code, tasks run sequentially — one waits for the other to finish. This project uses FreeRTOS to run two tasks truly independently, each controlling an LED at its own timing without interfering with the other.

# Tools & Technologies
- Arduino IDE — Firmware development
- FreeRTOS (Richard Barry) — Real-time OS library

# How It Works
- Two FreeRTOS tasks run simultaneously:
  
  |Task|LED|BlinkRate|
  |----|---|---------|
  |TaskBlink1|Built-in LED (Pin 13)|500ms|
  |TaskBlink2Red| LED (Pin 8)|200ms|
