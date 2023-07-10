#include "main.h"
/**
 * _strncat - concatenates two strings
 * using at most n bytes from scr
 * @dest: destination sting
 * @scr: source string
 * @n: number of bytes
 *
 * Return: concatenated dest
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
