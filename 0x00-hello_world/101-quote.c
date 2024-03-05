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
	const char *str1 = "and that piece of art is useful\" - ";
	const char *str2 = "Dora Korpar, 2015-10-19\n";
	ssize_t len1 = strlen(str1);
	ssize_t len2 = strlen(str2);
	ssize_t bytes_towrite1 = write(2, str1, len1);
	ssize_t bytes_towrite2 = write(2, str2, len2);

	if (bytes_towrite1 == len1 && bytes_towrite2 == len2)
		return (1);
	else
		return (EXIT_FAILURE);
}
