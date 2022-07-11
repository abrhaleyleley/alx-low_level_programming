#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and taht piece of art is useful"
 * - Dora korpar, 2015-10-19",
 * followed by a new line, to the standard error.
 * Return: 1 if success
 */
int main(void)
{
fprintf(stderr,"and that piece of art is useful\"");
fprintf(stderr," - Dora korpar, 2015-10-19");
putchar(10);
return (0);
}
