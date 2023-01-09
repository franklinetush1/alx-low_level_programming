#include "main.h"

/**
 * _memcpy - Copies n bytes from the memory area pointed
 * to by src into that pointed to by dest.
 * @dest: pointer to the memory area to copy src into.
 * @src: source buffer to copy characters from.
 * @n: number of bytes to copy from src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	char *location = dest;
	char *source = src;

	for (x = 0; x < n; x++)
		location[x] = source[x];

	return (dest);
}
