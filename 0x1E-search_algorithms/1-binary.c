#include "search_algos.h"

/**
 * binary_search - search for val in a sorted array using binary search algos
 * @array: pointer to first element of array to search
 * @size: length of array
 * @value: value to search for
 *
 * Return: the index of searched element.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, low = 0, high = size - 1, mid;

	if (array == NULL)
		return (-1);

	while  (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; ++i)
			printf("%d%s", array[i], (i < high) ? ", " : "\n");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	
	return (-1);
}

