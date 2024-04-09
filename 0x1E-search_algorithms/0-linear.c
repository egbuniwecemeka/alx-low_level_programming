#include "search_algos.h"

/**
 * linear_search - Searches an array in linear format
 * @arr: pointer to the first element of the array to search in
 * @size: lenght of array
 * @value: value to find
 *
 * Return: first index where value is stored
 */
int linear_search(int *arr, size_t size, int value)
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, arr[i]);
		if (arr[i] == value)
			return (i);
	}

	return (-1);
}
