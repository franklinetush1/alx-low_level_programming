#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to power y.
 * @x: number to be raised.
 * @y: The power.
 *
 * Return: The result.
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
