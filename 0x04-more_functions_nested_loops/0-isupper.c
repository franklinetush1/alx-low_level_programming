#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: value to be checked
 * Return: returns 1 for uppercase and 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
