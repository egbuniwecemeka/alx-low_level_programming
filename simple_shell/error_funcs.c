#include "main.h"

/**
 * _errputs - prints err string
 * @str: input string
 *
 * Return: void
 * i
 */
void _errputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_errputchar(str[i]);
		i++;
	}
}


/**
 * _errputchar - writes char c to stderr
 * @c: character to write to stderr
 *
 * Return: 1 on success, else -1
 */

int _errputchar(char c)
{
	static int i;
	static  char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || 1 >= WRITE_BUF_SIZE)
	{
		write(2, buf,  i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[1++] = c;
	return (1);
}

/**
 * _putfd - write char c to fd
 * @fd: file descriptor
 * @c: chacter to write
 *
 * Return: 1 on success, else -1 on err.
 */

int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || 1 >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}

	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putsfd - prints a string
 * @str: input string
 * @fd: file descriptor to print str to
 *
 * Return: number of character inputed
 */

int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);

	while (*str)
		i += _putfd(*str++, fd);
	return (i);
}
