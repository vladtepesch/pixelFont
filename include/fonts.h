

#ifndef PIXELFONTS_H
#define PIXELFONTS_H
#include <inttypes.h>
#include <stdbool.h>

#include "fontConfig.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifndef FONT_ACTIVATE_4x6
#  define FONT_ACTIVATE_4x6   1
#endif
#ifndef FONT_ACTIVATE_5x8
#  define FONT_ACTIVATE_5x8   1
#endif
#ifndef FONT_ACTIVATE_5x12
#  define FONT_ACTIVATE_5x12  1
#endif
#ifndef FONT_ACTIVATE_6x8
#  define FONT_ACTIVATE_6x8   1
#endif
#ifndef FONT_ACTIVATE_6x10
#  define FONT_ACTIVATE_6x10  1
#endif
#ifndef FONT_ACTIVATE_7x12
#  define FONT_ACTIVATE_7x12  1
#endif
#ifndef FONT_ACTIVATE_7x12b
#  define FONT_ACTIVATE_7x12b 1
#endif
#ifndef FONT_ACTIVATE_8x8
#  define FONT_ACTIVATE_8x8   1
#endif
#ifndef FONT_ACTIVATE_8x12
#  define FONT_ACTIVATE_8x12  1
#endif
#ifndef FONT_ACTIVATE_8x14
#  define FONT_ACTIVATE_8x14  1
#endif
#ifndef FONT_ACTIVATE_10x16
#  define FONT_ACTIVATE_10x16 1
#endif
#ifndef FONT_ACTIVATE_12x16
#  define FONT_ACTIVATE_12x16 1
#endif
#ifndef FONT_ACTIVATE_12x20
#  define FONT_ACTIVATE_12x20 1
#endif
#ifndef FONT_ACTIVATE_16x26
#  define FONT_ACTIVATE_16x26 1
#endif
#ifndef FONT_ACTIVATE_22x36
#  define FONT_ACTIVATE_22x36 0 /* bigfont */
#endif
#ifndef FONT_ACTIVATE_24x40
#  define FONT_ACTIVATE_24x40 0 /* bigfont */
#endif
#ifndef FONT_ACTIVATE_32x53
#  define FONT_ACTIVATE_32x53 0 /* bigfont */
#endif



#define FONT_MAX_FONTCOUNT ( 0\
                             + FONT_ACTIVATE_4x6   \
                             + FONT_ACTIVATE_5x8   \
                             + FONT_ACTIVATE_5x12  \
                             + FONT_ACTIVATE_6x8   \
                             + FONT_ACTIVATE_6x10  \
                             + FONT_ACTIVATE_7x12  \
                             + FONT_ACTIVATE_7x12b \
                             + FONT_ACTIVATE_8x8   \
                             + FONT_ACTIVATE_8x12  \
                             + FONT_ACTIVATE_8x14  \
                             + FONT_ACTIVATE_10x16 \
                             + FONT_ACTIVATE_12x16 \
                             + FONT_ACTIVATE_12x20 \
                             + FONT_ACTIVATE_16x26 \
                             + FONT_ACTIVATE_22x36 \
                             + FONT_ACTIVATE_24x40 \
                             + FONT_ACTIVATE_32x53 \
                            ) 



typedef struct FontDef{
  bool isVert;
  uint8_t w;
  uint8_t h;
  uint8_t bytesPerChar;
  uint8_t bytesPerRowOrLine;
  const uint8_t* data;
}FontDef;

typedef void (*fontDrawPixelCallback)(int x, int y, void* data);

/// fills pointer of available Fonts into the given buffer
void font_getListOfFonts(const FontDef** o_list, int i_maxSize);

#if FONT_ACTIVATE_4x6 == 1
const FontDef* font4x6_getFontDef(void);
#endif

#if FONT_ACTIVATE_5x8 == 1
const FontDef* font5x8_getFontDef(void);
#endif

#if FONT_ACTIVATE_5x12 == 1
const FontDef* font5x12_getFontDef(void);
#endif

#if FONT_ACTIVATE_6x8 == 1
const FontDef* font6x8_getFontDef(void);
#endif

#if FONT_ACTIVATE_6x10 == 1
const FontDef* font6x10_getFontDef(void);
#endif

#if FONT_ACTIVATE_7x12 == 1
const FontDef* font7x12_getFontDef(void);
#endif

#if FONT_ACTIVATE_7x12b == 1
const FontDef* font7x12b_getFontDef(void);
#endif

#if FONT_ACTIVATE_8x8 == 1
const FontDef* font8x8_getFontDef(void);
#endif

#if FONT_ACTIVATE_8x12 == 1
const FontDef* font8x12_getFontDef(void);
#endif

#if FONT_ACTIVATE_8x14 == 1
const FontDef* font8x14_getFontDef(void);
#endif

#if FONT_ACTIVATE_10x16 == 1
const FontDef* font10x16_getFontDef(void);
#endif

#if FONT_ACTIVATE_12x16 == 1
const FontDef* font12x16_getFontDef(void);
#endif

#if FONT_ACTIVATE_12x20 == 1
const FontDef* font12x20_getFontDef(void);
#endif

#if FONT_ACTIVATE_16x26 == 1
const FontDef* font16x26_getFontDef(void);
#endif

#if FONT_ACTIVATE_22x36 == 1
const FontDef* font22x36_getFontDef(void);
#endif

#if FONT_ACTIVATE_24x40 == 1
const FontDef* font24x40_getFontDef(void);
#endif

#if FONT_ACTIVATE_32x53 == 1
const FontDef* font32x53_getFontDef(void);
#endif






static inline const uint8_t* font_getCharData(const FontDef* i_fd, char c)
{
  return &i_fd->data[(int)c * i_fd->bytesPerChar];
}


void font_drawChar(char c, const FontDef* i_fd, int x, int y, fontDrawPixelCallback drawPixel, void* data);

static inline void font_drawString(const char* s, const FontDef* i_fd, int x, int y, fontDrawPixelCallback drawPixel, void* data){
  while(*s){
    font_drawChar(*s, i_fd, x, y, drawPixel, data);
    x += (int)i_fd->w;
    ++s;
  }

}

#ifdef __cplusplus
}
#endif


#endif // PIXELFONTS_H