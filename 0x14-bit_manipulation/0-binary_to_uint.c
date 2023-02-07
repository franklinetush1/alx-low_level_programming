#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, dec = 1;
	int len;

	for (len = 0; b[len];)
		len++;

    if (b == '\0')
		return (0);

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		total += (b[len] - '0') * dec;
		dec *= 2;
	}

	return (total);
}
