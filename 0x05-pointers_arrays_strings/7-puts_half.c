#include "main.h"

/**
 * puts_half - Prints half of a string then a new line
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int x = 0, length = 0, l;

	while (str[x++])
		length++;

	if ((length % 2) == 0)
		l = length / 2;

	else
		l = (length + 1) / 2;

	for (x = l; x < length; x++)
		_putchar(str[x]);

	_putchar('\n');
}
