#include <Keyboard.h>

void setup() {
  // make pin 2 an input and turn on the
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  //if the button is pressed
  if (digitalRead(2) == LOW) {
    //Send the message
    Keyboard.write(32);
    delay(200);
  }
  if (digitalRead(3) == LOW) {
    //Send the message
    Keyboard.print("omxplayer --no-osd -o hdmi /home/pi/Videos/looming.mp4");
    delay(500);
    Keyboard.write(0xB0);
    delay(200);
  }
  if (digitalRead(4) == LOW) {
    //Send the message
    Keyboard.write('i');
    delay(200);
  }
  if (digitalRead(5) == LOW) {
    //Send the message
    Keyboard.write(0xB0);
    delay(200); 
    }
}
