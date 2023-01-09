#include "main.h"

/**
 * _isdigit - checks if its a digit
 * @c: to be checked
 * Return: returns 1 for a digit and 0 otherwise
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
