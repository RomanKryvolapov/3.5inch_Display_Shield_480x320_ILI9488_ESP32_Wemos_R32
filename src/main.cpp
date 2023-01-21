#include <SPI.h>
#include <TFT_eSPI.h>

// USER SETUP

// https://github.com/Bodmer/TFT_eSPI

// https://github.com/s60sc/Adafruit_TouchScreen

// PIN 32 MUST BE CONNECTED TO PIN 36 (1)
// PIN 33 MUST BE CONNECTED TO PIN 34
// PIN 15 MUST BE CONNECTED TO PIN 36 (2)

// https://github.com/Bodmer/TFT_eSPI/blob/master/User_Setups/Setup14_ILI9341_Parallel.h

// In user_Setup_Select.h setup file must be selected

//#define ESP32_PARALLEL
//#define ILI9488_DRIVER
//#define TFT_CS   33
//#define TFT_DC   15
//#define TFT_RST  32
//#define TFT_WR    4
//#define TFT_RD    2
//#define TFT_D0   12
//#define TFT_D1   13
//#define TFT_D2   26
//#define TFT_D3   25
//#define TFT_D4   17
//#define TFT_D5   16
//#define TFT_D6   27
//#define TFT_D7   14
//#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
//#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
//#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
//#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
//#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:.
//#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
//#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts
//#define SMOOTH_FONT

// 320x480
TFT_eSPI tft = TFT_eSPI();

void setup(void) {
    tft.init();
    tft.setRotation(1);
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(200, 140, 2);
    tft.println("Test");
}

void loop() {

}