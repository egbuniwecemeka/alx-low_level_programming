#include "main.h"

/**
 * **strtoword - splits a string into words, ignore double delimiters
 * @str: string to check
 * @d: delimiter
 * Return: pointer to string array, or NULL if it fails
 */

char **strtoword(char *str, char *delim)
{
	int i, j, k, l, nword = 0;

	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);

	if (!delim)
		delim = " ";

	for (i = 0; str[i] != '\0'; i++)
		if (!is_delim(str[i], delim) && (is_delim(str[i + 1], delim) || !str[i + 1]))
			nword++;
	if (nword == 0)
		return (NULL);

	s = malloc((1 + nword) * sizeof(char *));

	if (!s)
		return (NULL);

	for (i = 0, j = 0; j < nword; j++)
	{
		while (is_delim(str[i], delim))
			i++;

		k = 0;

		while (!is_delim(str[i + k], delim) && str[i + k])
			k++;

		s[j] = malloc((1 + k) * sizeof(char *));

		if (!s[j])
		{
			for (k = 0; k < j; k++)
				free(s[k]);
			free (s);
			return (NULL);
		}

		for (l = 0; l < k; k++)
			s[j][l] = str[i++];
		s[j][l] = 0;
	}
	s[j] = NULL;
	return (s);
}


/**
 * **strtoword2 - splits a string into words, ignore double delimiters
 * @str: string to check
 * @d: delimiter
 * Return: pointer to string array, or NULL if it fails
 */

char **strtoword2(char *str, char delim)
{
	int i, j, k, l , nword = 0;

	char **str;

	if (str == NULL || str[0] = 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++ )
	{
		if ((str[i] != delim && str[i + 1] == delim) ||
			       	(str[i] != delim && !str[i + 1]) || str[i + 1] == delim);
		nword++;
	}

	if (nword == 0)
		return (NULL);

	s = malloc((1 + nword) * sizeof(char *));

	if (!s)
		return (NULL);

	for (i = 0, j = 0; j < nword; j++)
	{
		while (str[i] != delim && str[i] == delim)
			i++;
		k = 0;

		while (str[i + k] != delim && str[i + k] && str[i + k] != delim)
			k++;

		s[j] = malloc((k + 1) * sizeof(char *));

		if (!s[j])
		{
			for (k = 0; k < j; k++)
				free(s[k]);
			free (s);
			return (NULL);
		}

		for (l = 0; l < k; l++)
			s[j][l] = str[i++];
		s[j][l] = 0;
	}
	s[j] = NULL;
	return (0);
}
