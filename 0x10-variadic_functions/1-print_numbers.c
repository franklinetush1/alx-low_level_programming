#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - this function will print the number passes to it.
 * @separator: element to print as the separator.
 * @n: number of elements to print.
 * @...: arguments to print.
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int a = 0;

	va_start(num, n);

	while (a < n)
	{

		printf("%d", va_arg(num, int));
		a++;
		if (a < n && (separator))
			printf("%s", separator);
	}
	putchar(10);
	va_end(num);
}

