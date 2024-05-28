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

	printf("%ld, %ld", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if (fibonacci[i] % 2 == 0)
		{
			if (i >= 2 && i != 50)
			{
				printf(", ");
			}
			printf("%ld", fibonacci[i]);
		}
	}

	printf("\n");

	return (0);
}
