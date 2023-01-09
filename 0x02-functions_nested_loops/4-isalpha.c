#include "main.h"

/**
 * _isalpha - checks if c is a letter, lowercase or uppercase
 * @c: to be checked
 * Return: is 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
