#include <stdio.h>

/**
 * main -  Start- It prints the lowercase alphabet in reverse.
 *
 * Return: Is always 0.
 *
*/

int main(void)

{
	char let;

	for (let = 'z'; let >= 'a'; let--)
	putchar(let);
	putchar('\n');
	return (0);
}
