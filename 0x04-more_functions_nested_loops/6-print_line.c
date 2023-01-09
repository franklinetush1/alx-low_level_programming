#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of (_) to be printed
 */

void print_line(int n)
{
	int s;

	if (n > 0)
	{
		for (s = 0; s < n; s++)
			_putchar('_');
	}

	_putchar('\n');
}
