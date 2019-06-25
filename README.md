# IOT Plant Irrigation System

### An IOT-enabled plant Irrigation system implemented using NodeMCU(ESP8266) and Blynk App.

#### This system allows you to water your garden plants using your smartphone and also keep track the soil moisture using the real-time moisture reading. Water is pumped using a 12 Volt submersible pump. The pump can be turned on/off using the app. The 'Auto Turn-Off' feature is enabled, it automatically turns off the pump when the moisture rises above a certian threshhold. The threshhold is preset to 50%.


![WhatsApp Image 2019-06-25 at 3 28 03 PM](https://user-images.githubusercontent.com/38681469/60090580-6fcef700-9760-11e9-808e-94511983b9a1.jpeg)

#### Components required
- NodeMCU
- Soil Moisture Sensor
- 5 Volt Relay
- 12 Volt submersible DC pump
- Multi-Output Voltage Converter (Power Supply)
- 12 Volt wall adapter
- 1 piece 2N2222 npn Transistor
- some resistors (220 ohm and 4.7 Kohm)
- some LEDs
- some jumper cables

#### The circuit diagram for the system is show below
![WhatsApp Image 2019-06-25 at 3 51 17 PM](https://user-images.githubusercontent.com/38681469/60090950-23d08200-9761-11e9-90b4-1bf948e4b4ab.jpeg)

#### Instructions to set up Blynk App
1. Use a button and assign it to digital pin D5. This will turn the pump on and off.
2. Use another button and assign it to digital pin D2. This is to enable and disable the Auto Turn-Off feature.
3. Use a guage and assign it to virtual pin V5. This will read the analog readings from the soil moisture sensor.

#### The Screenshot of the app is show below,
![WhatsApp Image 2019-06-25 at 4 04 56 PM](https://user-images.githubusercontent.com/38681469/60091794-08667680-9763-11e9-8edb-f944bf2a2d9b.jpeg)

####Images of the system after full setup,
![WhatsApp Image 2019-06-25 at 3 28 03 PM (2)](https://user-images.githubusercontent.com/38681469/60091949-63986900-9763-11e9-9fa3-fe67aaec508f.jpeg)
![WhatsApp Image 2019-06-25 at 3 28 03 PM (1)](https://user-images.githubusercontent.com/38681469/60091951-64c99600-9763-11e9-8d9a-f60d16238376.jpeg)

#### Link to [Video Demonstration](https://www.dropbox.com/s/w5l0yi6yzho4d04/VID-20190625-WA0012.mp4?dl=0)

