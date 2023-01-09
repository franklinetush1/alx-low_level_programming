#include "main.h"
/**
 * _islower - checks if a character is in lower case
 * @c: variable to be checked
 * Return:outputs 1 or 0.
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
