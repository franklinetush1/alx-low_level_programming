#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: First number to be added.
 * @n2: Second number to be added.
 * @r: Buffer to store the result.
 * @size_r: Buffer size.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x, n1_length = 0, n2_length = 0;

	for (x = 0; *(n1 + x); x++)
		n1_length++;

	for (x = 0; *(n2 + x); x++)
		n2_length++;

	if (size_r <= n1_length + 1 || size_r <= n2_length + 1)
		return (0);

	n1 += n1_length - 1;
	n2 += n2_length - 1;
	*(r + size_r) = '\0';

	return (n1, n2, r, --size_r);
}
