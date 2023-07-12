#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	
	while (start <= end)
	{
		int mid = (start + end) / 2;

		print(start, end, array);
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (-1);
}

/**
  * print - prints the values in an array
  * @array: A pointer to the first element of the array to search.
  * @start: index to start printing
  * @end: last index of the array to print.
  * Return: void
  * Description: Prints the [sub]array being searched after each change.
  */

void print(int start, int end, int *array)
{
	int i;

	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	if (!0)
		printf("\n");
}
