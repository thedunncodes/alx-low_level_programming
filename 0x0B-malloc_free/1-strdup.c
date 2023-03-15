#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: pointer "s" and Null if "s" is empty
 */

char *_strdup(char *str)
{
	int i;
	int c;
	char *s;

	c = strlen(str);

	if (str == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(*s) * (c + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		*(s + i) = *(str + i);
	}

	return (s);
}
