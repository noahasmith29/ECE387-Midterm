import oscP5.*;        //  Load OSC P5 library
import netP5.*;        //  Load net P5 library
import processing.serial.*;    //  Load serial library

Serial arduinoPort;        //  Set arduinoPort as serial connection
OscP5 oscP5;            //  Set oscP5 as OSC connection

int redButton = 0;        //  redButton lets us know if the Mario button is On or off
int blueButton = 0;      //  blueButton lets us know if the Star Wars button is On or off
int greenButton = 0;     //  greenButton lets us know if the Vader button is On or off
int [] buttons = new int [4];    //  Array allows us to add more toggle buttons in TouchOSC

void setup() {
  size(100,300);        // Processing screen size
  noStroke();            //  We don’t want an outline or Stroke on our graphics
    oscP5 = new OscP5(this,8000);  // Start oscP5, listening for incoming messages at port 8000
   arduinoPort = new Serial(this, Serial.list()[0], 115200);    // Set arduino to 115200 baud
}

void oscEvent(OscMessage theOscMessage) {   //  This runs whenever there is a new OSC message

    String addr = theOscMessage.addrPattern();  //  Creates a string out of the OSC message
    if(addr.indexOf("/1/toggle") !=-1){   // Filters out any toggle buttons
      int i = int((addr.charAt(9) )) - 0x30;   // returns the ASCII number so convert into a real number by subtracting 0x30
      buttons[i]  = int(theOscMessage.get(0).floatValue());     //  Puts button value into buttons[i]
    // Button values can be read by using buttons[0], buttons[1], buttons[2], etc.
     
    }
}

void draw() {
 background(50);        // Sets the background to a dark grey, can be 0-255

   if(buttons[1] == 0){        //  If buttons button 1 if off do....
    arduinoPort.write("m");    // Sends the character “m” to Arduino
    redButton = 0;        // Sets redButton color to 0, can be 0-255
  }
 if(buttons[1] == 1){        // If buttons button 1 is ON do...
  arduinoPort.write("M");    // Send the character “M” to Arduino
  redButton = 255;        // Sets redButton color to 255
  }
  if(buttons[2] == 0){        //  If buttons button 1 if off do....
    arduinoPort.write("s");    // Sends the character “s” to Arduino
    blueButton = 0;        // Sets blueButton color to 0
  }
 if(buttons[2] == 1){        // If buttons button 1 is ON do...
  arduinoPort.write("S");    // Send the character “S” to Arduino
  blueButton = 255;        // Sets blueButton color to 255
  }
  if(buttons[3] == 0){        //  If buttons button 1 if off do....
    arduinoPort.write("v");    // Sends the character “v” to Arduino
    greenButton = 0;        // Sets greenButton color to 0
  }
 if(buttons[3] == 1){        // If buttons button 1 is ON do...
  arduinoPort.write("V");    // Send the character “V” to Arduino
  greenButton = 255;        // Sets greenButton color to 255
  }
   fill(redButton,0,0);            // Fill rectangle with redButton amount
   ellipse(50, 50, 50, 50);    // Created an ellipse at 50 pixels from the left...
                // 50 pixels from the top and a width of 50 and height of 50 pixels
   fill(0,0,blueButton);            // Fill rectangle with blueButton amount
   ellipse(50, 150, 50, 50);    // Created an ellipse at 50 pixels from the left...
                // 150 pixels from the top and a width of 50 and height of 50 pixels
   fill(0,greenButton,0);            // Fill rectangle with greenButton amount
   ellipse(50, 250, 50, 50);    // Created an ellipse at 50 pixels from the left...
                // 250 pixels from the top and a width of 50 and height of 50 pixels
}