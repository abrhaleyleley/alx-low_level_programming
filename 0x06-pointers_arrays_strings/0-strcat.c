#include "main.h"
 /**
  * _strcat -> is afunction of two strings
  * @dest: is 1st parameter
  * @src: is 2nd parameter
  * Return: a character
  */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;
	for (i = 0; src[i] !='\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (des);
}
