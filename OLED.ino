#include "audi.h"


void initDisplay()  {
  Wire.begin(0, 2);
  display.begin(SH1106_SWITCHCAPVCC);
  display.clearDisplay();
  display.setTextColor(BLACK);
  display.setTextWrap(false);
  display.setRotation(0);
  display.fillRect(0, 0, 128, 64, BLACK);
  display.display();
  delay(1000);
  display.setTextColor(WHITE);
  display.setTextWrap(false);
  display.setRotation(0);
  //display.setCursor(0, 4);
  display.fillRect(0, 0, 128, 64, BLACK);
  display.drawBitmap(0, 0, audi, 128, 64, 1);
  display.display();
  delay(5000);
  display.clearDisplay();
  display.fillRect(0, 0, 128, 64, BLACK);
  display.display();
  delay(1000);


  display.setCursor(10, 25);
  display.setTextSize(2);
  display.print("TIVEDA");
  display.setTextSize(1);
  display.display();
  delay(2000);
  display.clearDisplay();
  display.display();
  Serial.begin(9600); 
}

