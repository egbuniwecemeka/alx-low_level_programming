#include <string.h>
#include <stdio.h>

int str_token(char *str, const char *delim)
{
	char *token;
	token = strtok(str, delim);
	int i;

	while (token != NULL)
	{
		printf("%s\n", token);

		token = strtok(NULL, delim);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}

	return (0);
}
