#include "main.h"
/**
 * factorial - calculates the factorial of numbers
 * @n: number to be calculated
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	int i = 0;

	if (n < i)
	{
		return (-1);
	}
	else if (n == i)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
