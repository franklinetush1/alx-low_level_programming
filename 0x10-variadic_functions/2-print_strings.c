#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print given string
 * @separator: separator to print with if Null don't print any separators.
 * @n: number of arguments to print.
 * @...: string to print.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *r;

	va_start(str, n);
	i = 0;
	while (i < n)
	{
		r = va_arg(str, char*);
		if (!r)
			printf("(nil)");
		else
			printf("%s", r);
		i++;
		if (i < n && separator)
			printf("%s", separator);
	}
	putchar(10);
	va_end(str);
}

