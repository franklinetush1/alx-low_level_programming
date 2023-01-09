#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals
 * of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int x, total1 = 0, total2 = 0;

	for (x = 0; x < size; x++)
	{
		total1 += a[x];
		a += size;
	}

	a -= size;

	for (x = 0; x < size; x++)
	{
		total2 += a[x];
		a -= size;
	}

	printf("%d, %d\n", total1, total2);
}
