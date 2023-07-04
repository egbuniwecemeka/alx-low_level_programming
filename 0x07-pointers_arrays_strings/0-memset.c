#include "main.h"
/**
 * _memset() - fills the first n bytes of the memory area
 * @s: starting address to be filled
 * @b: desired value
 * @n: amount of bytes
 * Return: pointer to memory address s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
