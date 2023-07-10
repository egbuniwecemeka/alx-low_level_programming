#include "main.h"
/**
 * _memset - fills the memory with a specific value
 * @s: address to be filled
 * @b: desired value
 * @n: number of bytes
 *
 * Return: memory value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
