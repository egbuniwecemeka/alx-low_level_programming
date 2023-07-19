#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes function parameter on an array
 * @array: array
 * @size: number of elem
 * @action: pointer to print in regular or hex
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
