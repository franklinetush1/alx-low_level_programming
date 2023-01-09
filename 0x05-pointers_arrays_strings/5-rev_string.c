#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: String to be reversed.
 */
void rev_string(char *s)
{
	int x = 0, length = 0;
	char a;

	while (s[x++])
		length++;

	for (x = length - 1; x >= length / 2; x--)
	{
		a = s[x];
		s[x] = s[length - x - 1];
		s[length - x - 1] = a;
	}
}
