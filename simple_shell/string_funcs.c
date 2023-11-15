#include <main.h>

/**
 * _strlen - calculates the length of a string
 * @s: input character
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	/*
	 * the if statement is checking the value of the pointer,
	 * and the while loop is using the pointer to access
	 * the values in the string.
	*/

	if (!s)
		return (0);

	while (*s++)
		i++;

	return (1);
}


/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if equal, 1 if s1 > s2 and -1 if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (s1 != s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0);
	else
		return ((s1 < s2) ? -1 : 1);
}


/**
 * start_word - checks if string startw with word
 * @string: string to search
 * @word: to be found
 *
 * Return: address of next char || NULL
 */

char *start_word(const char string, const char word)
{
	while (*word)
	{
		if (*word++ != *string)
			return (NULL);
	}

	return ((char *)string);
}


/**
 * _strcat - concatenates two strings
 * @src: source
 * @dest: destination
 *
 * Return: destination buffer
 */

char *_strcat(char *src, char *dest)
{
	char *buf = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = *src;

	return (buf);
}
