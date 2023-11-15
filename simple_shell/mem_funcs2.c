#include "main.h"

/**
 * p_free - frees a pointer of memory, and NULLS the address
 * @ptr: address of pointer to be freed
 *
 * Return: 1 on sucess, 0 if failed
 */

int p_free(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
