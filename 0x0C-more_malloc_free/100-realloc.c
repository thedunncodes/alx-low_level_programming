#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the previously allocated memory block
 * @old_size: The size of the old memory block in bytes
 * @new_size: The size of the new memory block in bytes
 *
 * Return: If new_size is equal to old_size - returns ptr.
 *	If new_size is zero and ptr is not NULL - frees ptr and returns NULL.
 *	Otherwise, returns a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *remalloc;
	unsigned int i, j;

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	remalloc = malloc(new_size);
	if (remalloc == NULL)
		return (remalloc);
	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			remalloc[j] = *((char *)ptr + j);
		free(ptr);

		return (remalloc);
	}
	if (ptr == NULL)
	{
		for (i = 0; i < (new_size - old_size); i++)
			remalloc[i] = i;

		return (remalloc);
	}
	for (i = 0; i < (new_size - old_size); i++)
		remalloc[i] = *((char *)ptr + i);

	remalloc[i] = '\0';
	free(ptr);
	return (remalloc);
}
