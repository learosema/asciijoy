#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <dos.h>
#include "textmode.h"


int main()
{
	textmode_setmode(3);
	textmode_font8();
	textmode_clear(0x1e);
	textmode_print("Hello World!", 33, 25, 0x1e);
	textmode_fill_area(1,5,4,5, '.', 0x3f);
	textmode_box(12,3,30,7,0x4f);
	textmode_dblbox(15,14,30,7,0x2e);
	return 0;
}
