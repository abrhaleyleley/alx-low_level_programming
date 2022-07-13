#include "main.h"
#include <string.h>

/**
 * puts_half -> puts_half is a function
 * @str: string parameter
 */
void puts_half(char *str)
{
	int x, y, i;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
		_putchar(srt[i]);
	_putchar('\n');
}
