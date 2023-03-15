#include <stdlib.h>
#include "main.h"
/**
 * create_array - prints buffer in hexa
 * @c: specific char to be replicated/stored
 * @size: the size of the memory to print
 * Return: Apointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = (char *)malloc(sizeof(*s) * size);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
	free(s);
}
