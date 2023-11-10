#include "main.h"

int execve_func(char *line)
{
	pid_t pid;
	char *token;
	const char *delim = " ";
	char *argv[] = {"ls", "-l", NULL};
	char *envp[] = {"NULL"};


	token = strtok(line, delim);

	while (token)

	printf("Before execv:");

	pid = fork();

	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (execve("/usr/bin/ls", argv, envp) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(pid, NULL, 0);
	}


	printf("After execve:");

	return (0);
}
