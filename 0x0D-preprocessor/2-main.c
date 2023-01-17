#include <stdio.h>

/**
 * main - Prints the name of the file of the program it
 *        was compiled from, followed by a new line.
 *
 * Return: is 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
