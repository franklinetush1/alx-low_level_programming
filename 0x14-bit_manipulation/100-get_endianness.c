#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 for (Big Endian),
 * 1 for (Little Endian)
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *)&a;

	if (*b)
		return (1);

	return (0);
}
