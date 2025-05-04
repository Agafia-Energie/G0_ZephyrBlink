# Agafia-SG0+ Board Zephyr Framework Setup

Welcome to the Agafia-SG0+ board setup guide for the Zephyr framework. Follow these steps to get started with embedded development on Agafia-SG0+ using Zephyr.

## Installation Steps

1. **Install CMake**  
   Download and install CMake from the [Cygwin website](https://cygwin.com/install.html).

2. **Install PlatformIO**  
   Ensure PlatformIO is installed on your system.

3. **Create a Sample STM32-Based Project**  
   Create a sample project for any STM32-based board in PlatformIO. This step allows PlatformIO to install the necessary STM32 board files.

4. **Modify Board Configuration**  
   - Navigate to:
     ```
     C:\Users\username\.platformio\platforms\ststm32\boards\agafia_sg0.json
     ```
   - Open `agafia_sg0.json` and add **Zephyr** under the `frameworks` tag:

     ```json
     "frameworks": [
         "arduino",
         "cmsis",
         "libopencm3",
         "stm32cube",
         "zephyr"
     ]
     ```

   - Save the file.

5. **Copy Board Package Installation Files**  
   - Locate the board package installation files in:
     ```
     /boardfiles/agafiasg0
     ```
   - Copy the `agafiasg0` folder and paste it into:
     ```
     C:\Users\username\.platformio\packages\framework-zephyr\boards\st
     ```

6. **Restart VS Code**  
   - Close and reopen Visual Studio Code.
   - Create a new PlatformIO project for the **Agafia-SG0+** board.
   - Select the **Zephyr** framework.

7. **Write, Compile, and Run Code**  
   Use example projects to write, compile, and execute code on the Agafia-SG0+ board.

## Blink LED Example

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
