#include "main.h"

int find_sqrt(int no, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of a number.
 * @no: Number to find the square root of.
 * @root: Root to be tested.
 *
 * Return: If the number has a natural square root - the square root
 * else -1.
 */
int find_sqrt(int no, int root)
{
	if ((root * root) == no)
		return (root);

	if (root == no / 2)
		return (-1);

	return (find_sqrt(no, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: Gives the natural square root of n.
 *         otherwise -1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
