#include "main.h"

/**
 * _memset - fills up a memory area 
 * @str: pointer to memory are
 * @byte: memory to be filled by *s
 * @n: amount of byte 
 *
 * Return: pointer to mem area (str)
 */

char *_memset(char *str, char byte, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		str[i] = byte;

	return (str);
}

/**
 * b_free - frees a string of a string
 * @sf: string to be freed
 */

void b_free(char **sf)
{
	char **f_val = sf;

	if (!sf)
		return;

	while (*sf)
		free(*sf++);
	return (f_val);
}

/**
 * _realloc - eallocates a 
 * @ptr: pointer to old mem block
 * @new_byte: memory to new byte
 * @old_byte: memory to old byte
 * Return: pointer to memory block
 */

void _realloc(void *ptr, unsigned int new_byte, unsigned int old_byte)
{
	char *p;

	if (!ptr)
		return (malloc(new_byte));
	if (!new_byte)
		return (free(ptr), NULL); 		
	if (new_byte == old_byte)
		return (ptr);

	p = malloc(new_byte);

	if (!p)
		return (NULL);

	old_byte = old_byte < new_byte ? old_byte : new_byte;

	while (old_byte--)
		p[old_byte] = ((char *)ptr)[old_byte];
	free(ptr);

	return (p);
}
