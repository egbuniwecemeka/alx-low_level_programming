#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 * @n: The number to be printed.
 * Return: value of last digit of a number.
 */
int print_last_digit(int n)
{
	int last_num;

	last_num = n % 10;
	if (last_num < 0)
	{
		last_num = last_num * -1;
	}
	_putchar(last_num + 0);
	return (last_num);
}
