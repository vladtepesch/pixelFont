#include <fonts.h>
#include <stddef.h>

#define FONT_SUPPORT_BIG ((FONT_ACTIVATE_22x36 + FONT_ACTIVATE_24x40 + FONT_ACTIVATE_32x53)>0)


// ####################################################

#if FONT_ACTIVATE_4x6 == 1
const FontDef* font4x6_getFontDef(void){
  static
  #include "4x6_vertikal_LSB_2.h"
  static const FontDef fd = {
    .isVert = true,
    .bytesPerChar      = 4,
    .bytesPerRowOrLine = 1,
    .h = 6,
    .w = 4,
    .data = (const uint8_t*)&font[0][0],
  };
  return &fd;
}

#endif


// ####################################################
#if FONT_ACTIVATE_5x8 == 1

const FontDef* font5x8_getFontDef(void){
  static
  #include "5x8_vertikal_LSB_2.h"

  static const FontDef fd = {
    .isVert = true,
    .bytesPerChar      = 5,
    .bytesPerRowOrLine = 1,
    .h = 8,
    .w = 5,
    .data = (const uint8_t*)&font[0][0],
  };
  return &fd;
}
#endif



// ####################################################
#if FONT_ACTIVATE_5x12 == 1
const FontDef* font5x12_getFontDef(void)
{
  static
#include "5x12_vertikal_LSB_2.h"

    static const FontDef fd = {
      .isVert = true,
      .bytesPerChar = 10,
      .bytesPerRowOrLine = 2,
      .h = 12,
      .w = 5,
      .data = (const uint8_t*)&font[0][0],
  };
  return &fd;

}
#endif


// ####################################################
#if FONT_ACTIVATE_6x8 == 1
const FontDef* font6x8_getFontDef(void)
{
  static
#include "6x8_vertikal_LSB_2.h"

    static const FontDef fd = {
      .isVert = true,
      .bytesPerChar = 6,
      .bytesPerRowOrLine = 1,
      .h = 8,
      .w = 6,
      .data = (const uint8_t*)&font[0][0],
  };
  return &fd;

}
#endif



// ####################################################
#if FONT_ACTIVATE_6x10 == 1
const FontDef* font6x10_getFontDef(void)
{
  static
#include "6x10_horizontal_LSB_2.h"

    static const FontDef fd = {
      .isVert = false,
      .bytesPerChar = 10,
      .bytesPerRowOrLine = 1,
      .h = 10,
      .w = 6,
      .data = (const uint8_t*)&font[0][0],
  };
  return &fd;

}
#endif


// ####################################################
#if FONT_ACTIVATE_7x12 == 1
const FontDef* font7x12_getFontDef(void)
{
  static
#include "7x12_horizontal_LSB_2.h"

    static const FontDef fd = {
      .isVert = false,
      .bytesPerChar = 12,
      .bytesPerRowOrLine = 1,
      .h = 12,
      .w = 7,
      .data = (const uint8_t*)&font[0][0],
  };
  return &fd;

}
#endif


// ####################################################
#if FONT_ACTIVATE_7x12b == 1
const FontDef* font7x12b_getFontDef(void)
{
  static
#include "7x12b_horizontal_LSB_2.h"

    static const FontDef fd = {
      .isVert = false,
      .bytesPerChar = 12,
      .bytesPerRowOrLine = 1,
      .h = 12,
      .w = 7,
      .data = (const uint8_t*)&font[0][0],
  };
  return &fd;

}
#endif


// ####################################################
#if FONT_ACTIVATE_8x8 == 1
const FontDef* font8x8_getFontDef(void)
{
  static
#include "8x8_vertikal_LSB_2.h"

    static const FontDef fd = {
      .isVert = true,
      .bytesPerChar = 8,
      .bytesPerRowOrLine = 1,
      .h = 8,
      .w = 8,
      .data = (const uint8_t*)&font[0][0],
  };
  return &fd;

}
#endif



// ####################################################
#if FONT_ACTIVATE_8x12 == 1
const FontDef* font8x12_getFontDef(void)
{
  static
#include "8x12_horizontal_LSB_2.h"

    static const FontDef fd = {
      .isVert = false,
      .bytesPerChar = 12,
      .bytesPerRowOrLine = 1,
      .h = 12,
      .w = 8,
      .data = (const uint8_t*)&font[0][0],
  };
  return &fd;

}
#endif


// ####################################################
#if FONT_ACTIVATE_8x14 == 1
const FontDef* font8x14_getFontDef(void)
{
  static
#include "8x14_horizontal_LSB_2.h"

    static const FontDef fd = {
      .isVert = false,
      .bytesPerChar = 14,
      .bytesPerRowOrLine = 1,
      .h = 14,
      .w = 8,
      .data = (const uint8_t*)&font[0][0],
  };
  return &fd;

}
#endif



// ####################################################
#if FONT_ACTIVATE_10x16 == 1
const FontDef* font10x16_getFontDef(void)
{
  static
#include "10x16_vertikal_LSB_2.h"

    static const FontDef fd = {
      .isVert = true,
      .bytesPerChar = 20,
      .bytesPerRowOrLine = 2,
      .h = 16,
      .w = 10,
      .data = (const uint8_t*)&font[0][0],
  };
  return &fd;

}
#endif



// ####################################################
#if FONT_ACTIVATE_12x16 == 1
const FontDef* font12x16_getFontDef(void)
{
  static
#include "12x16_vertikal_LSB_2.h"

    static const FontDef fd = {
      .isVert = true,
      .bytesPerChar = 24,
      .bytesPerRowOrLine = 2,
      .h = 16,
      .w = 12,
      .data = (const uint8_t*)&font[0][0],
  };
  return &fd;

}
#endif



// ####################################################
#if FONT_ACTIVATE_12x20 == 1
const FontDef* font12x20_getFontDef(void)
{
  static
#include "12x20_horizontal_LSB_2.h"

    static const FontDef fd = {
      .isVert = false,
      .bytesPerChar = 40,
      .bytesPerRowOrLine = 2,
      .h = 20,
      .w = 12,
      .data = (const uint8_t*)&font[0][0],
  };
  return &fd;

}
#endif



// ####################################################
#if FONT_ACTIVATE_16x26 == 1
const FontDef* font16x26_getFontDef(void)
{
  static
#include "16x26_horizontal_LSB_2.h"

    static const FontDef fd = {
      .isVert = false,
      .bytesPerChar = 52,
      .bytesPerRowOrLine = 2,
      .h = 26,
      .w = 16,
      .data = (const uint8_t*)&font[0][0],
  };
  return &fd;

}
#endif


// ####################################################
#if FONT_ACTIVATE_22x36 == 1
const FontDef* font22x36_getFontDef(void)
{
  static
#include "22x36_horizontal_LSB_2.h"

    static const FontDef fd = {
      .isVert = false,
      .bytesPerChar = 108,
      .bytesPerRowOrLine = 3,
      .h = 36,
      .w = 22,
      .data = (const uint8_t*)&font[0][0],
  };
  return &fd;

}
#endif



// ####################################################
#if FONT_ACTIVATE_24x40 == 1
const FontDef* font24x40_getFontDef(void)
{
  static
#include "24x40_horizontal_LSB_2.h"

    static const FontDef fd = {
      .isVert = false,
      .bytesPerChar = 120,
      .bytesPerRowOrLine = 3,
      .h = 40,
      .w = 24,
      .data = (const uint8_t*)&font[0][0],
  };
  return &fd;

}
#endif



// ####################################################
#if FONT_ACTIVATE_32x53 == 1
const FontDef* font32x53_getFontDef(void)
{
  static
#include "32x53_horizontal_LSB_2.h"

    static const FontDef fd = {
      .isVert = false,
      .bytesPerChar = 212,
      .bytesPerRowOrLine = 4,
      .h = 53,
      .w = 32,
      .data = (const uint8_t*)&font[0][0],
  };
  return &fd;

}
#endif





void font_getListOfFonts(const FontDef** o_list, int i_maxSize)
{
  int i = 0;

#if FONT_ACTIVATE_4x6 == 1
  if (i < i_maxSize) o_list[i++] = font4x6_getFontDef();
#endif
#if FONT_ACTIVATE_5x8 == 1
  if (i < i_maxSize) o_list[i++] = font5x8_getFontDef();
#endif
#if FONT_ACTIVATE_5x12 == 1
  if (i < i_maxSize) o_list[i++] = font5x12_getFontDef();
#endif
#if FONT_ACTIVATE_6x8 == 1
  if (i < i_maxSize) o_list[i++] = font6x8_getFontDef();
#endif
#if FONT_ACTIVATE_6x10 == 1
  if (i < i_maxSize) o_list[i++] = font6x10_getFontDef();
#endif
#if FONT_ACTIVATE_7x12 == 1
  if (i < i_maxSize) o_list[i++] = font7x12_getFontDef();
#endif
#if FONT_ACTIVATE_7x12b == 1
  if (i < i_maxSize) o_list[i++] = font7x12b_getFontDef();
#endif
#if FONT_ACTIVATE_8x8 == 1
  if (i < i_maxSize) o_list[i++] = font8x8_getFontDef();
#endif
#if FONT_ACTIVATE_8x12 == 1
  if (i < i_maxSize) o_list[i++] = font8x12_getFontDef();
#endif
#if FONT_ACTIVATE_8x14 == 1
  if (i < i_maxSize) o_list[i++] = font8x14_getFontDef();
#endif
#if FONT_ACTIVATE_10x16 == 1
  if (i < i_maxSize) o_list[i++] = font10x16_getFontDef();
#endif
#if FONT_ACTIVATE_12x16 == 1
  if (i < i_maxSize) o_list[i++] = font12x16_getFontDef();
#endif
#if FONT_ACTIVATE_12x20 == 1
  if (i < i_maxSize) o_list[i++] = font12x20_getFontDef();
#endif
#if FONT_ACTIVATE_16x26 == 1
  if (i < i_maxSize) o_list[i++] = font16x26_getFontDef();
#endif
#if FONT_ACTIVATE_22x36 == 1
  if (i < i_maxSize) o_list[i++] = font22x36_getFontDef();
#endif
#if FONT_ACTIVATE_24x40 == 1
  if (i < i_maxSize) o_list[i++] = font24x40_getFontDef();
#endif
#if FONT_ACTIVATE_32x53 == 1
  if (i < i_maxSize) o_list[i++] = font32x53_getFontDef();
#endif
  if (i < i_maxSize) o_list[i++] = NULL;
}



#if FONT_SUPPORT_BIG
typedef uint32_t datarow_t;
#else
typedef uint16_t datarow_t;
#endif
static inline datarow_t font_getDataRow(const FontDef* i_fd, const uint8_t** d) {
  datarow_t r = **d;
  if (i_fd->bytesPerRowOrLine > 1) {
    ++(*d);
    r |= ((datarow_t)**d) << 8;
    if (i_fd->bytesPerRowOrLine > 2) {
      ++(*d);
      r |= ((datarow_t)**d) << 16;
      if (i_fd->bytesPerRowOrLine > 3) {
        ++(*d);
        r |= ((datarow_t)**d) << 24;
      }
    }
  }
  return r;
}

void font_drawChar(char c, const FontDef* i_fd, int x, int y, fontDrawPixelCallback drawPixel, void* data){
  const uint8_t* d = font_getCharData(i_fd, c);
  if (i_fd->isVert){
    for(int ix = 0; ix < i_fd->w; ++ix, d++){
      datarow_t r = font_getDataRow(i_fd, &d);

      for(int iy = 0; r; ++iy, r >>= 1){
        if( r&0x01 ){
          drawPixel( x + ix, y + iy, data);
        }
      }
    } 

  }else{
    for (int iy = 0; iy < i_fd->h; ++iy, d++) {
      datarow_t r = font_getDataRow(i_fd, &d);

      for (int ix = 0; r; ++ix, r >>= 1) {
        if (r & 0x01) {
          drawPixel(x + ix, y + iy, data);
        }
      }
    }

  }
}

