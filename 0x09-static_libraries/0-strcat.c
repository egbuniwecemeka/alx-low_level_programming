#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @scr: source string
 *
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *scr)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (scr[i] != '\0')
	{
		dest[i] = scr[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
