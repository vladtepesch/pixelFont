Device independent Pixel Font Library
=====================================

The Library is designed to create a device independent way to draw pixel fonts to any kind of output.

For this the user has to provide a callback function that gets called to draw a single pixel.

The lib comes with a list of pixel fonts that can be enabled/disabled by `fontConfig.h` that has to be placed next to the `fonts.h`.

The lib is not limited to the provided fonts. Just create a own `FontDef` instance. However this is not retreived by the libraries provided `font_getListOfFonts()` function 


The tools folder contains a script that generates font descriptions based on the font header files.


Usage Example
-------------

```C
/// some user provided function to draw a pixel
/// @param x x coordinate to draw 
/// @param y y coordinate to draw
/// @param void* user data passed through - here used for color
void drawToLcd(int x, int y, void* data)
{
  if(x >= 0 && y>=0 && x< LCD_WIDTH && y<LCD_HEIGHT)
    lcd_setpixel(x, y, *((uint16_t*)data));
}

// [...]
uint16_t col = LIGHTGRAY;
font_drawString("Hallo Welt", font12x16_getFontDef(),  5,  5, &drawToLcd, &col);

```


Version History
---------------

### 0.1.0  Initial Version



Infos/Thanks
------------

Fonts were taken from 
https://github.com/basti79/LCD-fonts which took it from  Benedikt K. (benedikt) from this [Mikrocontroller.net Forum Post](https://www.mikrocontroller.net/topic/54860)
