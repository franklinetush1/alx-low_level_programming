#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 * @nmemb: The number of elements.
 * @size: The byte size of each element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails
 * NULL Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	unsigned int x;
	char *g;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	g = memory;

	for (x = 0; x < (size * nmemb); x++)
		g[x] = '\0';

	return (memory);
}
