#include "hash_tables.h"

/**
* hash_djb2 - This hash function implementing the djb2 algorithm
 * @str: the string to hash
 * Return: the hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	if (str == NULL)
		return (0);

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* the hash * 33 + c */

	return (hash);
}
