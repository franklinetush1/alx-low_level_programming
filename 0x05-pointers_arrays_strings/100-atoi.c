#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int x = 1;
	unsigned int y = 0;

	do {
		if (*s == '-')
			x *= -1;

		else if (*s >= '0' && *s <= '9')
			y = (y * 10) + (*s - '0');

		else if (y > 0)
			break;

	} while (*s++);

	return (x * y);
}
