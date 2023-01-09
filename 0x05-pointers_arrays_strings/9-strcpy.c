#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 * terminating null byte, to the buffer pointed to by @dest.
 * @dest: A buffer
 * @src: The source string
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
