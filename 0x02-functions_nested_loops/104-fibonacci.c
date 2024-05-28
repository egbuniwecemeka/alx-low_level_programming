#include "main.h"

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int i;
	unsigned long a = 1, b = 2, fibonacci;

	printf("%lu, %lu", a, b);

	for (i = 0; i < 98; i++)
	{
		fibonacci = a + b;
		a = b;
		b = fibonacci;

		printf(", %lu", fibonacci);
	}

	printf("\n");

	return (0);
}
