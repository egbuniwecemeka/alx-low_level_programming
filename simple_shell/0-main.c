#include <stdio.h>
#include <unistd.h>
#include "main.h"

int main(void)
{
	char *sample = "Test print count func\n";

	write(STDOUT_FILENO, sample, mystr_len(sample) + 1);

	return (0);
}
