#include "main.h"
#include <string.h>

/**
 * _strncpy -> this function is copies a string
 * @dest: 1st parameter
 * @src: 2nd parameter
 * @n: 3rd prameter
 * Return: will return string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
