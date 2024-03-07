#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - prints a string, and new line to stderr.
 *
 * Return: Always 1(Success)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t length = strlen(message);
	ssize_t bytes_towrite = write(2, message, length);

	if (bytes_towrite == length)
	{
		return (1);
	}else{
		return EXIT_FAILURE;
	}
}
