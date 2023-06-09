#include "hash_tables.h"

/**
 * key_index - This gives the index of a key
 * @key: the key
 * @size: the size of array of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2((const unsigned char *)key);
	return (hash % size);
}
