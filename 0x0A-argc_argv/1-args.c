#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 * @argc: the arguments
 * @argv: the array pointing to arguments
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	}
	printf("%d\n", a - 1);
	return (0);
}
