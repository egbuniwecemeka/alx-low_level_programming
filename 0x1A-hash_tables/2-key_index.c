#include "hash_tables.h"

/**
 * key_index - Gets the index of the key/value pair of a hash table,
 * using djb2 function
 *
 * @key: key to get index of
 * @size: size of the array of hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
