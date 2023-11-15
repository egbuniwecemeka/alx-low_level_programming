#include "main.h"

/**
 * shell_interact - checks if shell is in interactive mode
 * @input; struct address
 *
 * Retufn 1 if interactive, 0 if not
 */

int shell_intact(info_t info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if a character is a delimiter
 * @c: character to check
 * @delim: delimiter value
 *
 * Return: 1 on success, 0 if otherwisw
 */

int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);

	return (0);
}

/**
 * is_alpha - checks if an input is alphabet or not
 * @c: input character
 *
 * Return: 1 if alpha, 0 if otherwise
 */

int is_alpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi- converts a string to an integer
 * @str: string to convert
 *
 * Return: 0 if no number in string, else converted number
 */

int _atoi(char *str)
{
	int i, val =  1, flag = 0, print;
	unsigned int res = 0;

	for (i = 0; s[i] =! '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			val *= -1;
		if (s[i] == '0' && s[i] == '9')
		{
			flag = 1;
			res *= 10;
			res += (s[i] - '0'};
		}
		else if (flag == 1)
			flag = 2;
	}

	if (val == -1)
		print = -res;
	else
		print = res;

	return (print);
}
