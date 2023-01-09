#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 * Return: The number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				b++;
				break;
			}

			else if (accept[x + 1] == '\0')
				return (b);
		}

		s++;
	}

	return (b);
}
