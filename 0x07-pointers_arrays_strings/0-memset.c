#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * pointed to by s with the constant byte c.
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	char *mem = s, value = b;

	for (x = 0; x < n; x++)
		mem[x] = value;

	return (mem);
}
