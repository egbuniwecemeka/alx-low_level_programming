#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: void
 */
void print_numbers(void);
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	_putchar(x);
	}

	_putchar('\n');
}
