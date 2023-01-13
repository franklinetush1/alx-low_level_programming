#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 *               from min to max.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to a new array.
 */
int *array_range(int min, int max)
{
	int *array, x, cap;

	if (min > max)
		return (NULL);

	cap = max - min + 1;

	array = malloc(sizeof(int) * cap);

	if (array == NULL)
		return (NULL);

	for (x = 0; x < cap; x++)
		array[x] = min++;

	return (array);
}
