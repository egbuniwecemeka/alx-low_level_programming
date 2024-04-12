#include "search_algos.h"
#include <math.h>

/**
 * jump_search -  searches for a value in a sorted array using jump search alg
 * @array: pointer to first element of array
 * @size: length of array
 * @value: the value to search for
 *
 * Return: first index to searched value or NULL if value or array is empty
 */
int jump_search(int *array, size_t size, int value)
{
	/*initializes variables a and b to define the blocks for jump search*/
	int a = 0;
	int b = sqrt(size);
	size_t i;

	/*checks if array is NULL or empty*/
	if (array == NULL || size == 0)
		return (-1);

	/*jump search step to locate where value is */
	while (b < (int)size && array[b] < value)
	{
		a = b;
		b += sqrt(size);
	}

	/* performs a linear search within identified block*/
	for (i = a; i < (size_t)b && i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
