#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - prints a string, then a new line
 * @s: input
 * Return: 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar("\n");
	}
}
