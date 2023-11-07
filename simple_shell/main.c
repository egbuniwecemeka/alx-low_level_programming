#include <stdio.h>
#include "main.h"
#include <string.h>

int main(void)
{
	char str[50] = "Hello, I will become a Software Engineer";

	const char *delim = " ";

	str_token(str, delim);

	return (0);
}
