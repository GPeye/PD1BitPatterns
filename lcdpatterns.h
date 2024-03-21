#ifndef _LCD_PATTERNS_H
#define _LCD_PATTERNS_H


#include "pd_api.h"

const LCDPattern LCD_PATTERN_DITHER_GREY05 = LCDOpaquePattern(
	0b11111111,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11101111,
	0b11111111,
	0b11111111
);

const LCDPattern LCD_PATTERN_DITHER_GREY10 = LCDOpaquePattern(
	0b11111111,
	0b11111110,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11101111,
	0b11111111,
	0b11111111
);

const LCDPattern LCD_PATTERN_DITHER_GREY15 = LCDOpaquePattern(
	0b11111111,
	0b11101110,
	0b11111111,
	0b11111111,
	0b11111111,
	0b11101110,
	0b11111111,
	0b11111111
);

const LCDPattern LCD_PATTERN_DITHER_GREY20 = LCDOpaquePattern(
	0b11111111,
	0b11101110,
	0b11111111,
	0b10111011,
	0b11111111,
	0b11101110,
	0b11111111,
	0b10111011
);

const LCDPattern LCD_PATTERN_DITHER_GREY25 = LCDOpaquePattern(
	0b11111111,
	0b11101010,
	0b11111111,
	0b10111011,
	0b11111111,
	0b10101110,
	0b11111111,
	0b10111011
);

const LCDPattern LCD_PATTERN_DITHER_GREY30 = LCDOpaquePattern(
	0b11111111,
	0b10101010,
	0b11111111,
	0b10101010,
	0b11111111,
	0b10101010,
	0b11111111,
	0b10101010
);

const LCDPattern LCD_PATTERN_DITHER_GREY35 = LCDOpaquePattern(
	0b11111111,
	0b10101010,
	0b01110111,
	0b10101010,
	0b11111111,
	0b10101010,
	0b01110111,
	0b10101010
);

const LCDPattern LCD_PATTERN_DITHER_GREY40 = LCDOpaquePattern(
	0b01110111,
	0b10101010,
	0b11011101,
	0b10101010,
	0b01110111,
	0b10101010,
	0b11011101,
	0b10101010
);

const LCDPattern LCD_PATTERN_DITHER_GREY45 = LCDOpaquePattern(
	0b01110111,
	0b10101010,
	0b01010101,
	0b10101010,
	0b01110111,
	0b10101010,
	0b01010101,
	0b10101010
);

const LCDPattern LCD_PATTERN_DITHER_GREY50 = LCDOpaquePattern(
	0b10101010,
	0b01010101,
	0b10101010,
	0b01010101,
	0b10101010,
	0b01010101,
	0b10101010,
	0b01010101
);

const LCDPattern LCD_PATTERN_DITHER_GREY55 = LCDOpaquePattern(
	0b10001000,
	0b01010101,
	0b10101010,
	0b01010101,
	0b10001000,
	0b01010101,
	0b10101010,
	0b01010101
);

const LCDPattern LCD_PATTERN_DITHER_GREY60 = LCDOpaquePattern(
	0b10001000,
	0b01010101,
	0b00100010,
	0b01010101,
	0b10001000,
	0b01010101,
	0b00100010,
	0b01010101
);

const LCDPattern LCD_PATTERN_DITHER_GREY65 = LCDOpaquePattern(
	0b00000000,
	0b01010101,
	0b10001000,
	0b01010101,
	0b00000000,
	0b01010101,
	0b10001000,
	0b01010101
);

const LCDPattern LCD_PATTERN_DITHER_GREY70 = LCDOpaquePattern(
	0b00000000,
	0b01010101,
	0b00000000,
	0b01010101,
	0b00000000,
	0b01010101,
	0b00000000,
	0b01010101
);

const LCDPattern LCD_PATTERN_DITHER_GREY75 = LCDOpaquePattern(
	0b00000000,
	0b00010101,
	0b00000000,
	0b01000100,
	0b00000000,
	0b01010001,
	0b00000000,
	0b01000100
);

const LCDPattern LCD_PATTERN_DITHER_GREY80 = LCDOpaquePattern(
	0b00000000,
	0b00010001,
	0b00000000,
	0b01000100,
	0b00000000,
	0b00010001,
	0b00000000,
	0b01000100
);

const LCDPattern LCD_PATTERN_DITHER_GREY85 = LCDOpaquePattern(
	0b00000000,
	0b00010001,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00010001,
	0b00000000,
	0b00000000
);

const LCDPattern LCD_PATTERN_DITHER_GREY90 = LCDOpaquePattern(
	0b00000000,
	0b00000001,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00010000,
	0b00000000,
	0b00000000
);

const LCDPattern LCD_PATTERN_DITHER_GREY95 = LCDOpaquePattern(
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00010000,
	0b00000000,
	0b00000000
);

const LCDPattern LCD_PATTERN_DITHER_GREY50_ALT1 = LCDOpaquePattern(
	0b11001100,
	0b00110011,
	0b11001100,
	0b00110011,
	0b11001100,
	0b00110011,
	0b11001100,
	0b00110011
);

const LCDPattern LCD_PATTERN_DITHER_GREY50_ALT2 = LCDOpaquePattern(
	0b10101010,
	0b10101010,
	0b01010101,
	0b01010101,
	0b10101010,
	0b10101010,
	0b01010101,
	0b01010101
);

const LCDPattern LCD_PATTERN_CHECKER_SM = LCDOpaquePattern(
	0b11001100,
	0b11001100,
	0b00110011,
	0b00110011,
	0b11001100,
	0b11001100,
	0b00110011,
	0b00110011
);

const LCDPattern LCD_PATTERN_CHECKER_LG = LCDOpaquePattern(
	0b11110000,
	0b11110000,
	0b11110000,
	0b11110000,
	0b00001111,
	0b00001111,
	0b00001111,
	0b00001111
);

const LCDPattern LCD_PATTERN_V_STRIPES_THIN = LCDOpaquePattern(
	0b10101010,
	0b10101010,
	0b10101010,
	0b10101010,
	0b10101010,
	0b10101010,
	0b10101010,
	0b10101010
);

const LCDPattern LCD_PATTERN_V_STRIPES_MEDIUM = LCDOpaquePattern(
	0b11001100,
	0b11001100,
	0b11001100,
	0b11001100,
	0b11001100,
	0b11001100,
	0b11001100,
	0b11001100
);

const LCDPattern LCD_PATTERN_V_STRIPES_THICK = LCDOpaquePattern(
	0b11110000,
	0b11110000,
	0b11110000,
	0b11110000,
	0b11110000,
	0b11110000,
	0b11110000,
	0b11110000
);

const LCDPattern LCD_PATTERN_H_STRIPES_THIN = LCDOpaquePattern(
	0b11111111,
	0b00000000,
	0b11111111,
	0b00000000,
	0b11111111,
	0b00000000,
	0b11111111,
	0b00000000
);

const LCDPattern LCD_PATTERN_H_STRIPES_MEDIUM = LCDOpaquePattern(
	0b11111111,
	0b11111111,
	0b00000000,
	0b00000000,
	0b11111111,
	0b11111111,
	0b00000000,
	0b00000000
);

const LCDPattern LCD_PATTERN_H_STRIPES_THICK = LCDOpaquePattern(
	0b11111111,
	0b11111111,
	0b11111111,
	0b11111111,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
);

const LCDPattern LCD_PATTERN_DIAG2_XXX_THIN = LCDOpaquePattern(
	0b11110111,
	0b11111111,
	0b01111111,
	0b11111111,
	0b11110111,
	0b11111111,
	0b01111111,
	0b11111111
);

const LCDPattern LCD_PATTERN_DIAG2_XX_THIN = LCDOpaquePattern(
	0b11110111,
	0b11011111,
	0b01111111,
	0b11111101,
	0b11110111,
	0b11011111,
	0b01111111,
	0b11111101
);

const LCDPattern LCD_PATTERN_DIAG2_X_THIN = LCDOpaquePattern(
	0b11100111,
	0b10011111,
	0b01111110,
	0b11111001,
	0b11100111,
	0b10011111,
	0b01111110,
	0b11111001
);

const LCDPattern LCD_PATTERN_DIAG2_THIN = LCDOpaquePattern(
	0b11100011,
	0b10001111,
	0b00111110,
	0b11111000,
	0b11100011,
	0b10001111,
	0b00111110,
	0b11111000
);

const LCDPattern LCD_PATTERN_DIAG2 = LCDOpaquePattern(
	0b11000011,
	0b00001111,
	0b00111100,
	0b11110000,
	0b11000011,
	0b00001111,
	0b00111100,
	0b11110000
);

const LCDPattern LCD_PATTERN_DIAG2_THICK = LCDOpaquePattern(
	0b10000011,
	0b00001110,
	0b00111000,
	0b11100000,
	0b10000011,
	0b00001110,
	0b00111000,
	0b11100000
);

const LCDPattern LCD_PATTERN_DIAG2_X_THICK = LCDOpaquePattern(
	0b00000011,
	0b00001100,
	0b00110000,
	0b11000000,
	0b00000011,
	0b00001100,
	0b00110000,
	0b11000000
);

const LCDPattern LCD_PATTERN_DIAG2_XX_THICK = LCDOpaquePattern(
	0b00000001,
	0b00000100,
	0b00010000,
	0b01000000,
	0b00000001,
	0b00000100,
	0b00010000,
	0b01000000
);

const LCDPattern LCD_PATTERN_DIAG2_XXX_THICK = LCDOpaquePattern(
	0b00000001,
	0b00000000,
	0b00010000,
	0b00000000,
	0b00000001,
	0b00000000,
	0b00010000,
	0b00000000
);

const LCDPattern LCD_PATTERN_DIAG1_X_THIN = LCDOpaquePattern(
	0b10111111,
	0b01111111,
	0b11111110,
	0b11111101,
	0b11111011,
	0b11110111,
	0b11101111,
	0b11011111
);

const LCDPattern LCD_PATTERN_DIAG1_THIN = LCDOpaquePattern(
	0b00111111,
	0b01111110,
	0b11111100,
	0b11111001,
	0b11110011,
	0b11100111,
	0b11001111,
	0b10011111
);

const LCDPattern LCD_PATTERN_DIAG1 = LCDOpaquePattern(
	0b00111100,
	0b01111000,
	0b11110000,
	0b11100001,
	0b11000011,
	0b10000111,
	0b00001111,
	0b00011110
);

const LCDPattern LCD_PATTERN_DIAG1_THICK = LCDOpaquePattern(
	0b00110000,
	0b01100000,
	0b11000000,
	0b10000001,
	0b00000011,
	0b00000110,
	0b00001100,
	0b00011000
);

const LCDPattern LCD_PATTERN_BRICK = LCDOpaquePattern(
	0b11111111,
	0b11101111,
	0b11101111,
	0b00001000,
	0b11111111,
	0b11111110,
	0b11111110,
	0b10000000
);

const LCDPattern* DITHER_PATTERNS[] = { 
    &LCD_PATTERN_DITHER_GREY05,
    &LCD_PATTERN_DITHER_GREY10,
    &LCD_PATTERN_DITHER_GREY15,
    &LCD_PATTERN_DITHER_GREY20,
    &LCD_PATTERN_DITHER_GREY25,
    &LCD_PATTERN_DITHER_GREY30,
    &LCD_PATTERN_DITHER_GREY35,
    &LCD_PATTERN_DITHER_GREY40,
    &LCD_PATTERN_DITHER_GREY45,
    &LCD_PATTERN_DITHER_GREY50,
    &LCD_PATTERN_DITHER_GREY55,
    &LCD_PATTERN_DITHER_GREY60,
    &LCD_PATTERN_DITHER_GREY65,
    &LCD_PATTERN_DITHER_GREY70,
    &LCD_PATTERN_DITHER_GREY75,
    &LCD_PATTERN_DITHER_GREY80,
    &LCD_PATTERN_DITHER_GREY85,
    &LCD_PATTERN_DITHER_GREY90,
    &LCD_PATTERN_DITHER_GREY95
};

const LCDPattern* ALL_PATTERNS[] = { 
    &LCD_PATTERN_DITHER_GREY05,
    &LCD_PATTERN_DITHER_GREY10,
    &LCD_PATTERN_DITHER_GREY15,
    &LCD_PATTERN_DITHER_GREY20,
    &LCD_PATTERN_DITHER_GREY25,
    &LCD_PATTERN_DITHER_GREY30,
    &LCD_PATTERN_DITHER_GREY35,
    &LCD_PATTERN_DITHER_GREY40,
    &LCD_PATTERN_DITHER_GREY45,
    &LCD_PATTERN_DITHER_GREY50,
    &LCD_PATTERN_DITHER_GREY55,
    &LCD_PATTERN_DITHER_GREY60,
    &LCD_PATTERN_DITHER_GREY65,
    &LCD_PATTERN_DITHER_GREY70,
    &LCD_PATTERN_DITHER_GREY75,
    &LCD_PATTERN_DITHER_GREY80,
    &LCD_PATTERN_DITHER_GREY85,
    &LCD_PATTERN_DITHER_GREY90,
    &LCD_PATTERN_DITHER_GREY95,
    &LCD_PATTERN_DITHER_GREY50_ALT1,
    &LCD_PATTERN_DITHER_GREY50_ALT2,
    &LCD_PATTERN_CHECKER_SM,
    &LCD_PATTERN_CHECKER_LG,
    &LCD_PATTERN_V_STRIPES_THIN,
    &LCD_PATTERN_V_STRIPES_MEDIUM,
    &LCD_PATTERN_V_STRIPES_THICK,
    &LCD_PATTERN_H_STRIPES_THIN,
    &LCD_PATTERN_H_STRIPES_MEDIUM,
    &LCD_PATTERN_H_STRIPES_THICK,
    &LCD_PATTERN_DIAG2_XXX_THIN,
    &LCD_PATTERN_DIAG2_XX_THIN,
    &LCD_PATTERN_DIAG2_X_THIN,
    &LCD_PATTERN_DIAG2_THIN,
    &LCD_PATTERN_DIAG2,
    &LCD_PATTERN_DIAG2_THICK,
    &LCD_PATTERN_DIAG2_X_THICK,
    &LCD_PATTERN_DIAG2_XX_THICK,
    &LCD_PATTERN_DIAG2_XXX_THICK,
    &LCD_PATTERN_DIAG1_X_THIN,
    &LCD_PATTERN_DIAG1_THIN,
    &LCD_PATTERN_DIAG1,
    &LCD_PATTERN_DIAG1_THICK,
    &LCD_PATTERN_BRICK
};

#endif