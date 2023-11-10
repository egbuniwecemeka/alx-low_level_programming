#include "main.h"


int main(void)
{
	char *prompt = "$ ";
	char *lineptr = NULL;
size_t n = 0;
	ssize_t readByte;

	write(STDOUT_FILENO, prompt, 2);

	while ((readByte = getline(&lineptr, &n, stdin)) != 1)
	{
		if (readByte > 1)
			execve_func(lineptr);	

		write(STDOUT_FILENO, prompt, 2);
	}
	
	free(lineptr);

	return (0);
}
