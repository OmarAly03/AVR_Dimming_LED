# AVR_Dimming_LED

## Overview
In this project, we delve into the fascinating realm of dimming LEDs using Pulse Width Modulation (PWM) and Timer1 functionality of the ATmega328P microcontroller.

PWM is a technique widely employed in embedded systems to control the intensity of digital signals, making it ideal for applications such as LED dimming. With PWM, we can achieve a smooth variation in brightness levels by rapidly switching the LED on and off at varying duty cycles.

The ATmega328P, the heart of the Arduino Uno, offers powerful PWM capabilities through its timers. Timer1, one of the three timers available on the ATmega328P, provides a flexible platform for generating PWM signals. By configuring Timer1 appropriately, we can precisely control the frequency and duty cycle of the PWM signal, thus controlling the brightness of the LED.

In this project, we'll explore how to harness the PWM capabilities of Timer1 to dim an LED connected to the Arduino Uno. We'll delve into the intricacies of configuring Timer1, setting up PWM output pins, and implementing the necessary code to achieve smooth LED dimming effects.

## Workflow
- Set PORTB1 as output.
* Configure Fast PWM mode and clear on compare match.
+ Set timer with prescaler 64.
- In an infinite loop, gradually increase and decrease the PWM duty cycle.
* Use a delay to control the speed of the brightness change.

## Circuit Diagram
![Circuit Design](https://github.com/OmarAly03/AVR_Dimming_LED/assets/150297015/4dd20389-2af4-4f57-872d-ff8b66950ac2)


## Physical Demo With Different Delay Periods

### Delay 100ms


### Delay 70ms



