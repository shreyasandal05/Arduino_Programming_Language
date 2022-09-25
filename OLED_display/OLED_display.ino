#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include <dht.h>
#include <Adafruit_I2CDevice.h>
#define dht_apin A0 // Analog Pin sensor is connected to
dht DHT;

// OLED display TWI address
#define OLED_ADDR   0x3C

Adafruit_SSD1306 display(-1);

#if (SSD1306_LCDHEIGHT != 32)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

void setup() {
  // initialize and clear display
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();
  display.display();

  // display a pixel in each corner of the screen
  display.drawPixel(0, 0, WHITE);
  display.drawPixel(127, 0, WHITE);
  display.drawPixel(0, 63, WHITE);
  display.drawPixel(127, 63, WHITE);

  // display a line of text
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(40,5);
  display.print("SIDDHARTHA");
  display.setCursor(55,13);
  display.print("to");
  display.setCursor(46,24);
  display.print("SSTC");
  

  // update display with all of the above graphics
  display.display();
}

void loop() {
  //display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
   display.clearDisplay();
  display.display();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  DHT.read11(dht_apin);
  display.setCursor(20,5);
  display.print("Humidity :");
  display.print(DHT.humidity);
  display.setCursor(20,13); 
  display.print("Temperature :");
  display.print(DHT.temperature);
   //display.clearDisplay();
  display.display();
  delay(8000);//Wait before accessing Sensor
}
