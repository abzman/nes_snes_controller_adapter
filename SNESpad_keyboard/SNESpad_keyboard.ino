/* 
   this example from the SNESpad Arduino library
   displays the buttons on the joystick as bits
   on the serial port - rahji@rahji.com
   
   Version: 1.3 (11/12/2010) - got rid of shortcut constructor - seems to be broken
   
*/

#include <SNESpad.h>

// put your own strobe/clock    /data pin numbers here -- see the pinout in readme.txt
SNESpad nintendo = SNESpad(3,2,4,6);

unsigned long state = 0;

void setup() {
  Serial.begin(57600);  
}

void loop() {
  int pad1;
  int pad2;
  state = nintendo.buttons();
  pad1 |= ((state)&0x01)|(((state>>2)&0x01)<<1)|(((state>>4)&0x01)<<2)|(((state>>6)&0x01)<<3)|(((state>>8)&0x01)<<4)|(((state>>10)&0x01)<<5)|(((state>>12)&0x01)<<6)|(((state>>14)&0x01)<<7)|(((state>>16)&0x01)<<8)|(((state>>18)&0x01)<<9)|(((state>>20)&0x01)<<10)|(((state>>22)&0x01)<<11)|(((state>>24)&0x01)<<12)|(((state>>26)&0x01)<<13)|(((state>>28)&0x01)<<14)|(((state>>30)&0x01)<<15);
  state=state>>1;
  pad2 |= ((state)&0x01)|(((state>>2)&0x01)<<1)|(((state>>4)&0x01)<<2)|(((state>>6)&0x01)<<3)|(((state>>8)&0x01)<<4)|(((state>>10)&0x01)<<5)|(((state>>12)&0x01)<<6)|(((state>>14)&0x01)<<7)|(((state>>16)&0x01)<<8)|(((state>>18)&0x01)<<9)|(((state>>20)&0x01)<<10)|(((state>>22)&0x01)<<11)|(((state>>24)&0x01)<<12)|(((state>>26)&0x01)<<13)|(((state>>28)&0x01)<<14)|(((state>>30)&0x01)<<15);
  /*
  boolean pad1_style=1;//0=nes, 1=snes
  boolean pad2_style=1;//0=nes, 1=snes
  if(pad1&0b1111111100000000)
  {
    pad1_style=0;//0=nes, 1=snes
  }
    if(pad2&0b1111111100000000)
  {
    pad2_style=0;//0=nes, 1=snes
  }
  //Serial.println(pad1_style);
  //Serial.println(pad2_style);
  //Serial.println(pad1, BIN);
  
  
  char x1 = 128;
  char y1 = 128;
  char x2 = 128;
  char y2 = 128;
  
  *//*
    if(pad1&0x1) { Serial.println("NES A"); }
    if(pad1&0x2) { Serial.println("NES B"); }
    if(pad1&0x4) { Serial.println("NES Select"); }
    if(pad1&0x8) { Serial.println("NES Start"); }
    if(pad1&0x10) { Serial.println("NES up"); }
    if(pad1&0x20) { Serial.println("NES down"); }
    if(pad1&0x40) { Serial.println("NES left"); }
    if(pad1&0x80) { Serial.println("NES right"); }
    if(pad2&0x1) { Serial.println("B"); }
    if(pad2&0x2) { Serial.println("Y"); }
    if(pad2&0x4) { Serial.println("Select"); }
    if(pad2&0x8) { Serial.println("Start"); }
    if(pad2&0x10) { Serial.println("Up"); }
    if(pad2&0x20) { Serial.println("Down"); }
    if(pad2&0x40) { Serial.println("Left"); }
    if(pad2&0x80) { Serial.println("Right"); }
    if(pad2&0x100) { Serial.println("A"); }
    if(pad2&0x200) { Serial.println("X"); }
    if(pad2&0x400) { Serial.println("L"); }
    if(pad2&0x800) { Serial.println("R"); }
    */
    
    if(pad1&0x1) { Keyboard.press(KEY_COMMA); }
    if(pad1&0x2) { Keyboard.press(KEY_PERIOD); }
    if(pad1&0x4) { Keyboard.press(KEY_7); }
    if(pad1&0x8) { Keyboard.press(KEY_3); }
    if(pad1&0x10) { Keyboard.press(KEY_C); }
    if(pad1&0x20) { Keyboard.press(KEY_B); }
    if(pad1&0x40) { Keyboard.press(KEY_N); }
    if(pad1&0x80) { Keyboard.press(KEY_M); }
    if(!(pad1&0x1)) { Keyboard.release(KEY_COMMA); }
    if(!(pad1&0x2)) { Keyboard.release(KEY_PERIOD); }
    if(!(pad1&0x4)) { Keyboard.release(KEY_7); }
    if(!(pad1&0x8)) { Keyboard.release(KEY_3); }
    if(!(pad1&0x10)) { Keyboard.release(KEY_C); }
    if(!(pad1&0x20)) { Keyboard.release(KEY_B); }
    if(!(pad1&0x40)) { Keyboard.release(KEY_N); }
    if(!(pad1&0x80)) { Keyboard.release(KEY_M); }
    if(pad2&0x1) { Keyboard.press(KEY_J); }
    if(pad2&0x2) { Keyboard.press(KEY_L); }
    if(pad2&0x4) { Keyboard.press(KEY_8); }
    if(pad2&0x8) { Keyboard.press(KEY_4); }
    if(pad2&0x10) { Keyboard.press(KEY_Y); }
    if(pad2&0x20) { Keyboard.press(KEY_U); }
    if(pad2&0x40) { Keyboard.press(KEY_I); }
    if(pad2&0x80) { Keyboard.press(KEY_O); }
    if(pad2&0x100) { Keyboard.press(KEY_H); }
    if(pad2&0x200) { Keyboard.press(KEY_K); }
    if(pad2&0x400) { Keyboard.press(KEY_SEMICOLON); }
    if(pad2&0x800) { Keyboard.press(KEY_QUOTE); }
    if(!(pad2&0x1)) { Keyboard.release(KEY_J); }
    if(!(pad2&0x2)) { Keyboard.release(KEY_L); }
    if(!(pad2&0x4)) { Keyboard.release(KEY_8); }
    if(!(pad2&0x8)) { Keyboard.release(KEY_4); }
    if(!(pad2&0x10)) { Keyboard.release(KEY_Y); }
    if(!(pad2&0x20)) { Keyboard.release(KEY_U); }
    if(!(pad2&0x40)) { Keyboard.release(KEY_I); }
    if(!(pad2&0x80)) { Keyboard.release(KEY_O); }
    if(!(pad2&0x100)) { Keyboard.release(KEY_H); }
    if(!(pad2&0x200)) { Keyboard.release(KEY_K); }
    if(!(pad2&0x400)) { Keyboard.release(KEY_SEMICOLON); }
    if(!(pad2&0x800)) { Keyboard.release(KEY_QUOTE); }
    
    
  /*
  if(pad1_style)
  {
    if(pad1&0x1) { Serial.println("pad1 bit 0x1"); }
    if(pad1&0x2) { Serial.println("pad1 bit 0x2"); }
    if(pad1&0x4) { Serial.println("pad1 bit 0x4"); }
    if(pad1&0x8) { Serial.println("pad1 bit 0x8"); }
    if(pad1&0x10) { Serial.println("pad1 bit 0x10"); }
    if(pad1&0x20) { Serial.println("pad1 bit 0x20"); }
    if(pad1&0x40) { Serial.println("pad1 bit 0x40"); }
    if(pad1&0x80) { Serial.println("pad1 bit 0x80"); }
    if(pad1&0x100) { Serial.println("pad1 bit 0x100"); }
    if(pad1&0x200) { Serial.println("pad1 bit 0x200"); }
    if(pad1&0x400) { Serial.println("pad1 bit 0x400"); }
    if(pad1&0x800) { Serial.println("pad1 bit 0x800"); }
    
    if(pad1&0x1) { x=255;}
    if(pad1&0x2) { x=0;}
    if(pad1&0x4) { y=255;}
    if(pad1&0x8) { y=0;}
    
  Joystick.button(0, 0);
  Joystick.button(1, 0);
  Joystick.button(2, 0);
  Joystick.button(3, 0);
  Joystick.button(4, 0);
  Joystick.button(5, 0);
  Joystick.button(6, 0);
  Joystick.button(7, 0);
  Joystick.X(value);
  Joystick.Y(value);
  
  }
  else
  {
    
    if(pad1&0x1) { Serial.println("NES A"); }
    if(pad1&0x2) { Serial.println("NES B"); }
    if(pad1&0x4) { Serial.println("NES Select"); }
    if(pad1&0x8) { Serial.println("NES Start"); }
    if(pad1&0x10) { Serial.println("NES up"); }
    if(pad1&0x20) { Serial.println("NES down"); }
    if(pad1&0x40) { Serial.println("NES left"); }
    if(pad1&0x80) { Serial.println("NES right"); }
    
  Joystick.button(0, 0);
  Joystick.button(1, 0);
  Joystick.button(2, 0);
  Joystick.button(3, 0);
  Joystick.X(value);
  Joystick.Y(value);  

  }
  if(pad2_style)
  {
    
  Joystick.button(8, 0);
  Joystick.button(9, 0);
  Joystick.button(10, 0);
  Joystick.button(11, 0);
  Joystick.button(12, 0);
  Joystick.button(13, 0);
  Joystick.button(14, 0);
  Joystick.button(15, 0);
  Joystick.sliderLeft(value);
  Joystick.sliderRight(value);
  
  }
  else
  {
    
  Joystick.button(8, 0);
  Joystick.button(9, 0);
  Joystick.button(10, 0);
  Joystick.button(11, 0);
  Joystick.sliderLeft(value);
  Joystick.sliderRight(value);
  
  }
  */
  
 // delay(500);
}
