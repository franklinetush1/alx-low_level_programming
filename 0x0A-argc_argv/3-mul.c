#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry Point
 * atoi is a function that converts a string into an int
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			res *= atoi(argv[a]);
		}
		printf("%d\n", res);
	}
	return (0);
}
