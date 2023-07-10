#include <unistd.h>

/**
 * _putchar - prints char to stdout
 * @c: character to print
 *
 * Return: 1 (Success)
 * On error, -1 is returned and errno set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
