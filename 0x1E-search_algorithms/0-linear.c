#include "search_algos.h"
/**
  * linear_search - Searches for a value using linear search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array
  * @value: The element to search for
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index of the value
  */

int linear_search(int *array, size_t size, int value)
{
	int index = 0;
	int cSize = (int)size;
	if (array == NULL)
		return (-1);
	for (index = 0; index < cSize; index++)
	{
		printf("Value checked array [%d] = [%d]\n", index, array[index]);
		if (value == array[index])
		{
			return (index);
		}
	}
	return (-1);
}
