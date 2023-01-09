#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet,in lowercase.
 */

void print_alphabet_x10(void)

{
	char let;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (let = 'a'; let <= 'z'; let++)
		_putchar(let);
		_putchar('\n');
	}
}
