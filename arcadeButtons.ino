#include <Button.h>

Button button = Button(3);
Button button2 = Button(4);
Button button3 = Button(5);
Button button4 = Button(6);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  button.begin();
  button2.begin();
  button3.begin();
  button4.begin();
}

void loop() {
  button.read();
  bool pressed1 = button.pressed();
  bool pressed2 = button2.pressed();
  bool pressed3 = button3.pressed();
  bool pressed4 = button4.pressed();
  
  if(pressed1) {
    Keyboard.press(KEY_5);
  }
  if(pressed2) {
    Keyboard.press(KEY_6);
  }
  if(pressed3) {
    Keyboard.press(KEY_7);
  }
  if(pressed4) {
    Keyboard.press(KEY_8);
  }

  if(pressed1 || pressed2 || pressed3 || pressed4) {
    delay(100);
  }

  if(pressed1) {
    Keyboard.release(KEY_5);
  }
  if(pressed2) {
    Keyboard.release(KEY_6);
  }
  if(pressed3) {
    Keyboard.release(KEY_7);
  }
  if(pressed4) {
    Keyboard.release(KEY_8);
  }
}
