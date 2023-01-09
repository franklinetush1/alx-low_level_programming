#include "main.h"

/**
 * puts2 - a function that prints every other character of a
 * string starting with the first character
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int length = 0, x = 0;

	while (str[x++])
		length++;

	for (x = 0; x < length; x++)
		_putchar(str[x]);

	_putchar('\n');
}
