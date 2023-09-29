#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the value to change
 * @index: index of the bit to be cleared
 *
 * Return: 1 success && -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

