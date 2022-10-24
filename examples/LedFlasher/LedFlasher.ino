// LedFlasher example

//   LedFlasher ledName (pin, offtime, ontime, initiallyactive);   // set parameters


#include <LedFlasher.h>

      // set up some LEDs
      // LedFlasher floodLight (8, 200, 300);
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
        // floodLight.update ();
        shuttleBayDoors.update ();
        impuleEngine.update ();
        strobe.update ();
        navigation.update ();
        torpedoes.update ();
        
        
        // do other useful stuff here ...
      
       
        }  // end of loop