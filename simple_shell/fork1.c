#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error: fork");

		return (1);
	}

	pid = getpid();

	printf("My pid is %u\n", pid);

	if (child_pid == 0)
	{
		printf("%u child process id\n", pid);
	}
	else
	{
		printf("%u, %u I am the father\n", pid, child_pid);
	}

	return (0);

}
