#include "main.h"

/**
 * sum_natural_numbers - sum multiples of a a natural number
 * @n: natural number input
 *
 * Return: void
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
