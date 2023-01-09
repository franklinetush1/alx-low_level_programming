#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int num, p, m;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			p = num * m;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');

			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
