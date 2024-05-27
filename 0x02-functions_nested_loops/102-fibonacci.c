#include "main.h"

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int i, j, k;

	unsigned long long fib;

	j = 0;
	k = 1;

	for (i = 0; i < 49; i++)
	{

		fib = j + k;

		j = k;
		k = fib;

		printf("%lu", fib);

		if (i < 48)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
