#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all the arguments.
 * @n: number of aguments.
 * @...: list of aguments.
 *
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(numbers, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);
	return (sum);
}

