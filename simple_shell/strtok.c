#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[40] = "Hello, I am an Enginner";

	const char *delim = " ";

	char *token;
	token = strtok(str, delim);
	int i;

	while (token != NULL)
	{
		printf("%s\n", token);

		token = strtok(NULL, delim);
	}

	for (i = 0; i < 41; i++)
	{
		printf("%c", str[i]);
	}

	return (0);
}
