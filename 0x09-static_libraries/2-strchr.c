#include "main.h"
/**
 * _strchar - Entry point
 * @s: Sring value
 * @c: character value
 *
 * Return: 0 (Success)
 */
char *_strchar(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (0);
}
