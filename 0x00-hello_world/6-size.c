#include <stdio.h>

/**
 * main - Prints the size of various types
 *
 * Return: 0 if exited properly.
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
