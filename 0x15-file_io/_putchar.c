#include <unistd.h>

/**
 * _putchar - prints a char to stdout
 * @c: character to be printed
 *
 * Return: 1 on success, -1 on er & print errno.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
