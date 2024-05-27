#include "main.h"

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int i, j, k;

	int fib;

	j = 0;
	k = 1;

	for (i = 0; i < 49; i++)
	{

		fib = j + k;

		j = k;
		k = fib;

		printf("%d", fib);

		if (i < 49)
		{
			printf(", ");
		}
	}

	return (0);
}
