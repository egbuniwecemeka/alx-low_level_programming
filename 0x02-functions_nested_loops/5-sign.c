#include "main.h"
/**
 * print_sign - Print the siign of a number
 * @n - The character to be checked
 * Return: 1 if it is positive, -1 if negative, else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
