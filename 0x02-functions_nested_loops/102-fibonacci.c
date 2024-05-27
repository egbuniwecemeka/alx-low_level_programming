#include "main.h"

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int i, j, k;

	long fib;

	j = 0;
	k = 1;

	for (i = 0; i < 50; i++)
	{
		fib = j + k;

		j = k;
		k = fib;
	}
	printf("%ld\n", fib);;

	return (0);
}
