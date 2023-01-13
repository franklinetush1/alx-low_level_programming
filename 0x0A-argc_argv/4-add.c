#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, total = 0;

	if (argc < 1)
		return (0);

	for (a = 1; a < argc; a++)
	{
		if (!atoi(argv[a]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		total += atoi(argv[a]);
	}
	printf("%d\n", total);

	return (0);
}
