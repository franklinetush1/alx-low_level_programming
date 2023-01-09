#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int b, c, d;

	c = n - 1;

	for (b = 0; b < n / 2; b++)
	{
		d = a[b];
		a[b] = a[c];
		a[c--] = d;
	}
}
