#include "hash_tables.h"

/**
 * shash_table_create - This function creates a sorted hash table
 * @size: The size of array
 * Return: A pointer to new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = NULL;
	unsigned long int i = 0;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; ++i)
		new_table->array[i] = NULL;
	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}

/**
 * shash_table_set - This adds an element to the sorted hash table
 * @ht: the sorted hash table to add/update the key/value to
 * @key: the  key
 * @value: The value associated with the key
 * Return: 1 succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value) {}

/**
 * shash_table_get - This retrieves a value associated with a key
 * @ht: The sorted hash table to dig in
 * @key: The key to search for
 * Return: Value or NULL if key can't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - This prints a sorted hash table
 * @ht: the sorted hash table to be printed
 * Return: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	temp = ht->shead;
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - This prints a sorted hash table in reverse
 * @ht: the sorted hash table to be printed
 * Return: rev sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	temp = ht->stail;
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - This function deletes a sorted hash table
 * @ht: the sorted hash table to be delete
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp = NULL, *temp2 = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; ++i)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			temp2 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp2;
		}
	}
	free(ht->array);
	free(ht);
}
