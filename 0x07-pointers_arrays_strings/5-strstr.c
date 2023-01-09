#include "main.h"


/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 * Return: If the substring is located then a pointer to
 * the beginning of the located substring.
 * If the substring is not located then NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{

		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystack);

				x++;

			} while (haystack[x] == needle[x]);
		}

		haystack++;
	}

	return ('\0');
}
