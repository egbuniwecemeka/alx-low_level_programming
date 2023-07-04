#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest - copy to location
 * @scr: copy from location
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *scr, unsigned int n)
{
	int i = 0;

	int j = n;

	for (; i < j; i++)
	{
		dest[i] = scr[i];
		n--;
	}

	return (0);
}
