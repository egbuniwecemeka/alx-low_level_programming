#include <stddef.h>

/**
 * mystr_len - 
 * @len: length of string
 *
 * Return: length of string*/

size_t mystr_len(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{	
		len++; 
	}
	
	return (len);
}
