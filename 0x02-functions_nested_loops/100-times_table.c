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
				if (index < 10)
				{
					if (j != 0)
					{
						_putchar(32);
						_putchar(32);
					}
					_putchar(index % 10 + '0');
				}
				else if (index < 100)
				{
					_putchar(32);
					_putchar(index / 10 + '0');
					_putchar(index % 10 + '0');
				}
				else
				{
					_putchar(index / 100 + '0');
					_putchar((index / 10) % 10 + '0');
					_putchar(index % 10 + '0');

				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			printf("\n");
		}
}
