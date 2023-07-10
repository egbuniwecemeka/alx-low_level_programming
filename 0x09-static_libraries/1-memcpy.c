#include "main.h"
/**
 * _memcpy - copies memory from dest to string
 * @dest: memory destination
 * @scr: memory source
 * @n: number of bytes
 *
 * Return: copied memory in destination
 */
char *_memcpy(char *dest, char *scr, unsigned int n)
{
	int i = 0;
	int m = n;

	for (; i < m; i++)
	{
		dest[i] = scr[i];
		n--;
	}


	return (dest);
}
