# Project-CSE-3200
This repository includes the codes of my project CSE-3200. My project was on "Controlling Access using RFID & Arduino; Theft detection using Bluetooth Module & Arduino"

In this rfid system I have used arduino uno, rfid reader and rfid tags. The tags attached to the laptop and kept to students to be identified. In this project we have a key-ring tag and an electromagnetic card tag. Each tag has his own identification. The students use a card tag and the keychain tag is attached to laptop. I connected the rfid reader to the Arduino. The RFID reader is connected to the Arduino as follows: 
             1.	RFID 3.3v is connected to Arduino 3.3v\n
	     2. RST pin is connected to digital 9
	     3. SDA pin is connected to digital 10
             4.	MOSI pin is connected to digital 11
	     5. MISO pin is connected to digital 12
	     6. SCK pin is connected to digital 13
	     7. Ground is given to ground of Arduino
	     8. IRQ pin is not connected. 
After making the connection between RFID and Arduino, I wrote some codes that are included in "rfid_system.ino"


Then I have done the other part of my project i.e. “Theft Detection using Bluetooth modules and Arduino”. For this system, I have used two Bluetooth modules and two arduino uno. One Bluetooth module will be used as central Bluetooth module and the other one will be attached to the laptop.  
To connect the central Bluetooth module to Arduino, at first we have to connect the Arduino in the breadboard. First, we have to connect one end of a wire to the section on the Arduino board that says "5V", then connecting the other end to the positive sign on the very bottom row. Next, we have to connect one end of another wire to the Arduino pin which says “GND” and connecting the other end to any hole on the row with the minus sign next to it. 
Then the Bluetooth module is connected to the Arduino. The first and last pin of the bluetooth module is not used in this project. And the others are used as follows:
      1. RXD pin of the module is connected to Arduino's Transmitter pin(TX).
      2. TXD pin of the module is connected to Arduino's Receiver pin(RX)
      3. Ground of the module is given to ground of Arduino.
      4. VCC of the module is connected to +5v on the breadboard. 
After making the connection between the central bluetooth module and Arduino, I wrote some codes that are included in "central_BluetoothModlue.ino"



Then the other Bluetooth module is connected to another Arduino. The Bluetooth module is connected to the Arduino as follows: 
	     1. The VCC of the Bluetooth module is connected to Arduino 5v.
             2. Ground is given to ground of Arduino.\n
	     3. The RXD is connected to the TX of Arduino.
After making the connection between the other bluetooth module and Arduino, I wrote some codes that are included in "other_BluetoothModlue.ino"       


