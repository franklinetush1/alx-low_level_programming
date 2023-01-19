#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used for comparison
 * Return: If no element matches or size <= 0 - -1
 * Else The index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}

	return (-1);
}
