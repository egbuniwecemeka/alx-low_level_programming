#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: 1st integer
 * @b: 2nd integer
 * @c: 3rd integer
 * Return: 0 (Success)
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && b >= c)
	{
		largest = a;
	}
	else if (b >= a && a >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (0);
}
