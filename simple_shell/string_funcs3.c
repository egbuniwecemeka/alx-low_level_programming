#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 *
 * Return: concatenated strings
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	char *s = dest;

	i = 0;

	while (src[i] != '\0' || i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;

		while (j < n)
		{
			src[j] = '\0';
			j++;
		}
	}

	return (s);
}

/**
 * _strncat - concatenates a string
 * @dest: destination string
 * @src: source string
 * @n: bytes used
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	char *s = dest;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[i] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++
	}

	if (j < n)
		dest[i] = '\0';

	return (s);
}


/**
 * _strchar - locates a character in a string
 * @s: string to be checked
 * @c: character to find
 *
 * Return: pointer to memory of string
 */

char *_strchar(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
