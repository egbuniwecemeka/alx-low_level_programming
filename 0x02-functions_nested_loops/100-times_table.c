#include "main.h"

/**
 * print_times_table - prints n times table starting with 0
 * @n: Input integger
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, index;
	if (n > 15 || n < 0)
		return;
	else
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				index = i * j;
				printf("%d", index);
				if (j != n)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
}
