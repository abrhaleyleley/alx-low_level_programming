#include "main.h"
#include <string.h>

/**
 * print_rev ->printing string in recerce
 * @s: thestring to be printed in reverce
 */
void print_rev(char *s)
{
int i, n;

n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
