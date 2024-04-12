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
	/*initializes jump and jump_search to define the blocks for jump search*/
	size_t i, jump, jump_search;

	jump_search = sqrt(size);

	/*checks if array is NULL or empty*/
	if (array == NULL || size == 0)
		return (-1);

	/*jump search step to locate where value is */
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] - [%d]\n", jump, array[jump]);

		/* Stores prev jump position */
		i = jump;

		/* Updates current jump position */
		jump += jump_search;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	/* Adjust jump position */
	jump = jump < size - 1 ? jump : size - 1;

	/* performs a linear search within identified block*/
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] - [%d]\n", i, array[i]);

	printf("Value checked array[%ld] - [%d]\n", i, array[i]);

	/* Return value if found, otherwise corresponding err message */
	return (array[i] == value ? (int)i : -1);
}
