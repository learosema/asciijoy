#ifndef TEXTMODE_HPP
#define TEXTMODE_HPP

#include <stdint.h>


#if !defined(BYTE)
#define BYTE unsigned char
#endif

#if !defined(UINT)
#define UINT unsigned int
#endif

typedef struct MODEINFO
{
	uint8_t mode;
	uint8_t numCols;
	uint8_t numRows;
	uint8_t page;
	uint16_t pageSize;
} MODEINFO;

typedef struct RECT
{
	int x;
	int y;
	uint8_t width;
	uint8_t height;
} RECT;

void textmode_setmode(uint8_t mode);

void textmode_retrieve_modeinfo();

MODEINFO *textmode_get_modeinfo();

void textmode_set_page(uint8_t page);

void textmode_font8();

void textmode_cursor(uint8_t startRow, uint8_t endRow);

void textmode_clear(uint8_t color);

void textmode_hline(
	int x,
	int y,
	uint8_t width,
	uint8_t character,
	uint8_t color
);

void textmode_colorize_line(
	int x,
	int y,
	uint8_t width,
	uint8_t color
);

void textmode_fill_area(
	int x,
	int y,
	uint8_t width,
	uint8_t height,
	uint8_t character,
	uint8_t color
);

void textmode_colorize_area(
	int x,
	int y,
	uint8_t width,
	uint8_t height,
	uint8_t color
);

void textmode_print(char *str, int x, int y, uint8_t color);

void textmode_box(
	int x,
	int y,
	uint8_t width,
	uint8_t height,
	uint8_t color
);

void textmode_dblbox(
	int x,
	int y, 
	uint8_t width,
	uint8_t height, 
	uint8_t color
);

void textmode_gotoxy(uint8_t x, uint8_t y);

#endif
