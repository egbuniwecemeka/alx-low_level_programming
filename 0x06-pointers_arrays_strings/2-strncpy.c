#include "main.h"
/**
 * _strncpy - Copies a string
 * using at most n bytes from src
 * @dest: Input string
 * @scr: Input string
 * n: Input value
 * Return: dest
 */
char *_strncpy(char *dest, char *scr, int n)
{
	int j;

	j = 0;

	while (j < n && scr[j] != '\0')
	{
		dest[j] = scr[j];

		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
	}

	return (dest);
}
