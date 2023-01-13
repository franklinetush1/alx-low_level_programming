#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string;
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL
 * or a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int a, x, byte, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (byte = 0; av[a][byte]; byte++)
			size++;
	}

	s = malloc(sizeof(char) * size + 1);

	if (s == NULL)
		return (NULL);

	x = 0;

	for (a = 0; a < ac; a++)
	{
		for (byte = 0; av[a][byte]; byte++)
			s[x++] = av[a][byte];

		s[x++] = '\n';
	}

	s[size] = '\0';

	return (s);
}
