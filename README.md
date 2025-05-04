# Agafia-SG0+ Blink LED Example 

Welcome to the Agafia-SG0+ board setup guide for the Zephyr framework. Using Zephyr, you can follow these steps to get started with embedded development on Agafia-SG0+.

## Zephyr Framework & Board package installation Steps
 
First, download and install the [Zephyr board package for SG0+ ](https://github.com/Agafia-Energie/SG0_Zephyr_BoardPackage) under PlatformIO
 

##  Blink LED Example 
The Blink LED example demonstrates how to blink three LEDs connected to the Agafia-SG0+ board using the Zephyr framework.

### LED Pin Mapping

| Pin  | Function   |
|------|-----------|
| PC13 | LED       |
| PF0  | LED_F0    |
| PF1  | LED_F1    |

Each LED is controlled individually through Zephyr’s GPIO API, allowing users to create different blinking patterns.

To test the example:
1. Configure the GPIO pins in your Zephyr project.
2. Write the logic to toggle the LEDs at regular intervals.
3. Build and flash the firmware to the Agafia-SG0+ board.
4. Observe the LEDs blinking according to the defined logic.

## Happy Coding!  
Agafia-SG0+ is now ready for embedded development with Zephyr!
