#include "main.h"

/*
 * create_file - creates s file
 * @filename: pointer to file
 * @text-content: text content written i file
 *
 * Return: 1 on success, -1 on error
 */

int create_file(const char *filename, char *text_content)
{
	int fildes;
	int n;
	int wr;

	if (!filename)
		return (-1);

	fildes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fildes == -1)
		return (-1);

	for (n = 0; text_content[n]; n++);

	if (!text_content)
		text_content = "";

	wr = write(fildes, text_content, n);

	if (wr == -1)
		return (-1);

	close(fildes);

	return (1);
}
