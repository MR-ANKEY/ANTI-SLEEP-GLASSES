# Project Title - ANTI-SLEEP GLASSES
Accordingly there is a need for devices that work reliably, and keep the user awake efficiently. So, we have come up with a ANTI-SLEEP GLASSES (ASG). This system alerts the user if he/she falls asleep at the wheel thereby, avoiding accidents and saving lives. This system is useful especially for people who travel long distances and people who are driving late at night.

## Getting Started

### Step 1 - Components Used
| Components Name | Product Link |
--- | --- |
| Arduino Uno R3 | [X1 Link](https://amzn.eu/d/6wBItzO) |
| IR Sensor | [X1 Link](https://amzn.eu/d/7M8i4vN) |
| Transistor BC547 NPN | [X1 link](https://amzn.eu/d/gvKECr3) |
| 5 Volt Active Buzzer | [X1 link](https://amzn.eu/d/6AgsWjl) |
| Resistors 4.7K ohm | [X1 link](https://amzn.eu/d/3AlVW8P) |
| Glasses Frame | [X1 link](https://amzn.eu/d/hrYkqn6) |
| 3.7V-5V Battery | [X1 link](https://amzn.eu/d/6AgsWjl) |

### Step 2 - How it Works
The working of this project is based on an Infra Red Sensor, This sensor is the heart of this project.

Let's take a look to the IR Sensor. Basically it has a transmitter IR LED, A photo Diode, an Opp-amplifier IC and a potentiometer.

The photo diode is placed just next to the IR LED in such a way that it can not receive IR rays directly. Photodiode is sensitive to the IR radiation. It's cathode connected to the positive voltage i.e. 5volt and anode connected to the non-inverting input of the Opp-amplifier which also get pulled down though the 10Kilo ohm resistor. Potentiometer in IR sensor is use to set the sensitivity distance of the sensor, it connected to the inverting input of the Opp-amplifier. IR LED continuously transmit the infra red rays and if any object comes in front of it, IR rays get reflected back and it received by the photo diode due to this change in IR radiation the voltage at the anode get change, the change in anode voltage is depend on the IR radiation received by the photo diode. More the IR radiation received grater will be the change in anode voltage. The output of the IR Sensor taken from the output of the Opp-amplifier. We can adjust the sensitivity distance by rotating the potentiometer on the sensor, we rotate the potentiometer that means we set a threshold voltage for the noninverting input of the Opp-amplifier. Whenever the voltage on the noninverting input is greater than the threshold voltage, the voltage on the noninverting input i.e. +ve voltage from the photodiode get forwarded and get the positive pulse at the output of the Opp-amplifier i.e. output of the sensor.

Let's see the main circuit diagram of the project. I connected a IR sensor to the Arduino Uno R3 board as Vcc of the sensor to the vcc of the Arduino Uno, Ground to the ground and the output of the sensor to the Analog pin one (A1) of the Arduino Uno. I used a 5 volt buzzer for alerting. I connected buzzer to general purpose NPN Transistor (BC547) to drive it. Transistor's emitter connected to the ground and collector connected to the negative pin of the buzzer. Positive terminal of buzzer is further connected to the vcc of the Arduino Uno. Base of the transistor connected to the pin D3 of the Arduino Uno through the 4.7 kilo ohm resistor.
