#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - prints buffer in hexa
 * @c: specific char to be replicated/stored
 * @size: the size of the memory to print
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
	free(s);
}
