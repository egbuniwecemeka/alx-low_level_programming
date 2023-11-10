#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	pid_t my_pid;
	pid_t pid;

	printf("Before fork: %d\n", pid);

	pid = fork();

	if (pid == -1)
	{
		perror("fork");

		return (1);
	}
	printf("After fork: %d\n", pid);

	my_pid = getpid();

	printf("My pid is: %d\n", pid);

	return (0);

}
