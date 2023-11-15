#include "main.h"

/**
 * _erratoi - converts string to int
 *  @str: string to be converted
 *
 *  Return: 0 if no number found, otherwise the number
 *  on err -1
 */

int _erratoi(char *str)
{
	int i = 0;
	unsigned long int res = 0;

	if (*str == '+')
		str++;

	for (i = 0; i != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			res *= 10;
			res += (str[i] - '0');
			if (res > INT_MAX)
				return (-1)
		}
		else
			return (-1);
	}

	return (res);
}


/**
 * print_err  - prints an err message to stdout
 * @info: message to be printed
 * @str: input string
 * Return: 0 if no num is found in str, otherwise number,
 *  -1 on err.
 */

void print_err(info_t *info, char *str)
{
	_eputs(info->fname);
	_eputs(": ");
	print_d(info->line_count, STDERR_FILENO);
	_eputs(": ");
	_eputs(info->argv[0]);
	-eputs(": ");
	_eputs(str);
}


/**
 * print_d - prints a decimal in base 10
 * @inp: input
 * @fd: file descriptor
 *
 * Return: number of characters printed
 */

int print_d(int inp, int fd)
{
	int (*__putchar)(char) = _putchar;
	int i, count = 0;

	unsigned int _abs_, real;

	if (fd == STDERR_FILENO)
		__putchar = _eputchar;
	if (input < 0)
	{
		_abs_ = -inp;
		__putchar('-');
		count++;
	}
	else
		_abs_ = inp;

	current = _abs_;

	for (i = 1000000000; i > 1; i /= 10)
	{
		if (_abs_ / i)
		{
			__putchar('0' + real / i);
			count++;
		}
		real %= i;
	}
	__putchar('0' + real);
	count++;

	return (count);
}

/**
 * convert_num - converter function
 * @num: number
 * @base: base index
 * @flag: flags
 *
 * Return: string
 */

char *convert_num(long int num, int base, int flag)
{
	static char *arr;
	static char buf[60];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (!(flag & CONVERT_UNSIGNED) && num < 0)
	{
		n = -num;
		sign = '-';
	}
	arr = flag & CONVERT_LOWERCASE ? "0123456789abcdefg" : "0123456789ABCDEFGH;
	ptr  = &buf[59];
	*ptr = '\0';

	do {
		*--ptr = arr[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;

	return (ptr);
}


/**
* rem_comment - replaces all first '#' with '\0'
* @str: string to modify
*
* Return: 0 (Success)
*/

void rem_comment(char *str)
{
	int i;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '#' && (!i || str[i - 1] == ' '))
		{
			str[i] = '\0';
			break;
		}
	}
}
