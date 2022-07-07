# Read-Multiple-Analog-sensor-values-with-esp8266-Nodemcu
needed equipments: 
esp8266 or nodemcu
sensors(gives analog output) 
diodes
breadboard  

nstead of having multiple analog pins like other boards, the esp8266 only has one analog pin.  We make it possible to read multiple analog values using just one pin.

method:
By switching sensors on and off, similar to multiplexing, we achieve this. In the first stage, we turn on one sensor, read the analog data from that sensor, then turn on the next sensor, switch off the first sensor, then receive data from the second sensor that was just turned on.

connections:
Vcc of sensor1--> d1 (5)
Vcc of sensor2--> d2 (4)
grounds of sensors--> grounds
analog outputof sensors--> diodes positive(+) side
diodes negative(-) side--> A0 of esp8266
