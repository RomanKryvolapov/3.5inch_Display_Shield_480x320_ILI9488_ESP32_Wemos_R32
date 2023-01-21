<h1>Simple Platformio / CLion project</h1>
<h2>3.5inch Display Shield 480x320 with LI9488 controller</h2>
<h2>ESP32 Wemos R32 board</h2>
<h3>Pins:</h3>
<p>PIN 32 MUST BE WIRED TO PIN 36 (1)</p>
<p>PIN 33 MUST BE WIRED TO PIN 34</p>
<p>PIN 15 MUST BE WIRED TO PIN 36 (2)</p>

<p>See https://github.com/Bodmer/TFT_eSPI and https://github.com/s60sc/Adafruit_TouchScreen</p>
<p>User setup: https://github.com/Bodmer/TFT_eSPI/blob/master/User_Setups/Setup14_ILI9341_Parallel.h</p>
<p>In user_Setup_Select.h in TFT_eSPI library setup file must be selected</p>

<p>#define ESP32_PARALLEL</p>
<p>#define ILI9488_DRIVER</p>
<p>#define TFT_CS 33 // Wired from board</p>
<p>#define TFT_DC 15 // Wired from board</p>
<p>#define TFT_RST 32 // Wired from board</p>
<p>#define TFT_WR 4</p>
<p>#define TFT_RD 2</p>
<p>#define TFT_D0 12</p>
<p>#define TFT_D1 13</p>
<p>#define TFT_D2 26</p>
<p>#define TFT_D3 25</p>
<p>#define TFT_D4 17</p>
<p>#define TFT_D5 16</p>
<p>#define TFT_D6 27</p>
<p>#define TFT_D7 14</p>
<p>#define LOAD_GLCD</p>
<p>#define LOAD_FONT2</p>
<p>#define LOAD_FONT4</p>
<p>#define LOAD_FONT6</p>
<p>#define LOAD_FONT7</p>
<p>#define LOAD_FONT8</p>
<p>#define LOAD_GFXFF</p>
<p>#define SMOOTH_FONT</p>


![1!](https://github.com/RomanKryvolapov/3.5inch_Display_Shield_480x320_ILI9488_ESP32_Wemos_R32/blob/master/Display.jpg "1")

![2!](https://github.com/RomanKryvolapov/3.5inch_Display_Shield_480x320_ILI9488_ESP32_Wemos_R32/blob/master/Board.jpg "2")

![3!](https://github.com/RomanKryvolapov/3.5inch_Display_Shield_480x320_ILI9488_ESP32_Wemos_R32/blob/master/Display_pinout.jpg "3")

![4!](https://github.com/RomanKryvolapov/3.5inch_Display_Shield_480x320_ILI9488_ESP32_Wemos_R32/blob/master/Board_pinout.png "4")

