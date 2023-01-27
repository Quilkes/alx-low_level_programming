#include "search_algos.h"

void print_array(int *array, size_t start, size_t end);

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: -1 or index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, middle = end - start;

	if (!array)
		return (-1);

	while (start <= end)
	{
		print_array(array, start, end);
		middle = (start + end) / 2;

		if (array[middle] == value)
		{
			return (middle);
		}

		if (array[middle] < value)
			start = middle + 1;
		else
			end = middle - 1;
	}
	return (-1);
}

/**
 * print_array - Helper function to print array
 * @array: The array to print
 * @start: Where to start printing in the array
 * @end: Last element to print in array
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t idx = start;

	printf("Searching in array: ");
	for (; start <= end && array[idx] != array[end]; idx++)
	{
		printf("%d", array[idx]);
		printf(", ");
	}

	printf("%d\n", array[end]);
}
