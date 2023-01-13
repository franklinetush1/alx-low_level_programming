#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int x, index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] || s2[x]; x++)
		length++;

	concat_str = malloc(sizeof(char) * length);

	if (concat_str == NULL)
		return (NULL);

	for (x = 0; s1[x]; x++)
		concat_str[index++] = s1[x];

	for (x = 0; s2[x]; x++)
		concat_str[index++] = s2[x];

	return (concat_str);
}
