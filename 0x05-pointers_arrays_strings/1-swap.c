#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Integer to be swapped.
 * @b: Integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
