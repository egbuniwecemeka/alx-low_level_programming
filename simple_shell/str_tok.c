#include <string.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char str[20] = "Egbuniwe Emmanuel";
	char *delim = " ";
	char *token;
	int i;

	token = strtok(str, delim);

	while (token != NULL)
	{
		printf("%s\n", token);

		token = strtok(NULL, delim);
	}

	for (i = 0; str[i] != '\0' ; i++)
	{
		printf("%c\n", str[i]);
	}

	return (0);
}
