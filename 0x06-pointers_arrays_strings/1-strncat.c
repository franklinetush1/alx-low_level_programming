#include "main.h"

/**
 * _strncat - Concatenates two strings using at most an
 * inputted number of bytes from src.
 * @dest: The string to be appended
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, dest_length = 0;

	while (dest[x++])

		dest_length++;

	for (x = 0; src[x] && x < n; x++)

		dest[dest_length++] = src[x];

	return (dest);
}
