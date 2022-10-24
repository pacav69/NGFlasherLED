# How to do multiple things at once ... like cook bacon and eggs


# NGLedFlasher

[Reference: Website LED blink ](http://www.gammon.com.au/blink)


Original Author: Nick Gammon

## Purpose
The purpose of this library is to allow multiple LEDs to flash at different rates.

## Usage:

  LedFlasher ledName (pin, offtime, ontime, initiallyactive);   // set parameters
  
### example of usage:
  
  LedFlasher laserTurrent (5, 1000, 2000, true);   
  // set parameters. pin 5, off for 1000 mS, on for 2000 mS, initially active
  
	laserTurrent.begin ();    // initialize
	laserTurrent.on ();       // turn on
	laserTurrent.off ();      // turn off
	bool isOn = laserTurrent.isOn ();  // is it currently on?
	laserTurrent.update ();   // call in loop function
        
  
## Example CODE:
    
    
      #include <LedFlasher.h>

      // set up some LEDs
      // LedFlasher floodLight (8, 200, 300); // pin 8 is sometimes used for a buzzer
      LedFlasher shuttleBayDoors (9, 300, 600);
      LedFlasher impuleEngine (10, 900, 100);
      LedFlasher strobe (11, 500, 1000);
      LedFlasher navigation (12, 1000, 2000);
      LedFlasher torpedoes (13, 250, 500);
      
      void setup() 
        {      
        // floodLight.begin ();
        shuttleBayDoors.begin ();
        impuleEngine.begin ();
        strobe.begin ();
        navigation.begin ();
        torpedoes.begin ();
        }  // end of setup
      
      void loop() 
        {
        // update lights
        //floodLight.update ();
        shuttleBayDoors.update ();
        impuleEngine.update ();
        strobe.update ();
        navigation.update ();
        torpedoes.update ();
        
        
        // do other useful stuff here ...
      
       
        }  // end of loop

  
