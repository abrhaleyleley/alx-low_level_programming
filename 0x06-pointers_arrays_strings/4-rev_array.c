#include "main.h"

/**
 * reverse_array -> a function thar reverses array
 * @a: array a
 * @n: an element of an array
 * Return: array reverced
 */
Void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	aux = 1;
	p = a;
	for (i = 0; i < n; i++)
		p++;
	for (k = 0; k < n / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
