#include "main.h"

/** 
 * sum_natural_numbers - sum multiples of a a natural number
 * @n: natural number input
 *
 * Return: Success (0)
 */
void sum_natural_numbers(int n)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
