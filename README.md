# 7-Segmaent_Digit_Display
This library allows you to use simple code to write a digit to a 7 - Segment Digit Display.

To get Started you will need the following:

  * 2x 220 resisitor
  * An arduino board (Uno, Leonardo, Mega, etc.)
  * 10x male : male jumper wires
  
To get started connect digital pins 13, and 12 to the top two left pins on the dispay, and connect digital pins 11, and 10 to
the top two right pins on the display. Next connect pins A0, and A1 to to the two bottom left pins on the display, after that
connect pins A2, and A3 to the bottom two right pins on the display. Now, depending on the display there are two ways to connect power.

The first type of display is the common anode, for this you will need to connect the top and bottom midle pins to vcc or positive.
The second type of display is the common cathode, for this instead of connecting the middle pins to vcc connect them to ground(gnd).
