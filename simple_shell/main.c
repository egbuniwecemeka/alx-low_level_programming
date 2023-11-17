#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or -1 if error
 */

int main(int argc, char **argv)
{
	info_t info[] = {INFO_INIT};

	int fd = 2;

	asm ("mov %1, %0\n\t"
		"add $3, %0"
		: "-r" (fd)
		: "r" (fd));

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				_errputs(argv[0]);
				_errputs(": 0: Can't open");
				_errputs(argv[1]);
				_errputchar('\n');
				_errputchar(BUF_FLUSH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		info->readfd = fd;
	}
	pop_env_list(info);
	read_history(nfo);
	hsh(info, av);
	return (EXIT_SUCCESS);
}
