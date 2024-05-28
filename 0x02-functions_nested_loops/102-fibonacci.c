#include "main.h"

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int i;

	long int fibonacci[50];

	fibonacci[0] = 1;

	fibonacci[1] = 2;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			printf("%ld", fibonacci[i]);
		}
		else if (i == 1)
		{
			printf(", %ld", fibonacci[i]);
		}
		else
		{
			fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
			printf(", %ld", fibonacci[i]);
		}
	}

	return (0);
}
