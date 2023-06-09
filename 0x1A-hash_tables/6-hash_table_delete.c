#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - This function frees a hash table.
 * @ht: A pointer to hash table to be delete.
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *next_node = NULL, *node = NULL;

	if (!ht)
		return;

	if (ht->array)
	{
		for (; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				node = ht->array[i];
				while (node)
				{
					next_node = node->next;
					if (node->value)
						free(node->value);
					if (node->key)
						free(node->key);
					free(node);
					node = next_node;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
