#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: Input string
 * @scr: Input string
 * @n: bytes to be used from scr
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *scr, int n)
{
	int i;

	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n && scr[j] != '\0')
	{
		dest[i] = scr[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
