#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: First string.
 * @s2: Second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: ON function fail - NULL.
 *         Otherwise -pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int length = n, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x]; x++)
		length++;

	c = malloc(sizeof(char) * (length + 1));

	if (c == NULL)
		return (NULL);

	length = 0;

	for (x = 0; s1[x]; x++)
		c[length++] = s1[x];

	for (x = 0; s2[x] && x < n; x++)
		c[length++] = s2[x];

	c[length] = '\0';

	return (c);
}
