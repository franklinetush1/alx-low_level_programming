#include "search_algos.h"
/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 * @array: array to serch from
 * @size: size of the array
 * @value: value to search
 * Return: index of the number
 */

int jump_search(int *array, size_t size, int value)
{
	int index = 0, start = 0, key;

	if (array == NULL || size == 0)
		return (-1);

	key = sqrt((int)size);

	while (start < size && array[start] < value)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		index = start;
		start += key;
	}
	printf("Value found between indexes [%d] and [%d]\n", index, start);
	start = start < size - 1 ? start : size - 1;
	while (index < start && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		index++;
	}
	printf("Value checked array[%d] = [%d]\n", index, array[index]);
	if (array[index] == value)
		return (index);
	return (-1);
}
