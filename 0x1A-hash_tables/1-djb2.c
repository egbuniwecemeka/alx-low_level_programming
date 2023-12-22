#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 alogrithm
 * @str: string used to generate hash value
 *
 * Return: the resulting hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* same as * 33 + c */
	}

	return (hash);
}
