#include <unistd.h>
#include <stdio.h>

/**
 * myppid - prints the pid of a parent process
 *
 * Return: 0 (On Success)
 */

int myppid(void)
{
	pid_t ppid;

	ppid = getppid();

	printf("%u\n", ppid);

	return (0);
}
