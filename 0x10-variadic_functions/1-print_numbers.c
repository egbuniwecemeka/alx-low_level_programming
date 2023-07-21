#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, then a new line
 * @separator: string in between mumbers
 * @n: number of integers
 * ...: variandic parameter of numbers
 *
 * Return: 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int index;

	va_start(num, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(num, int));

		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(num);
}
