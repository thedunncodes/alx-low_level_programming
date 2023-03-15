#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, d;
	int a, b;
	char *s;

	if (s1 == NULL || s2 == NULL)
	{
	return (NULL);
	}

	i = strlen(s1);
	j = strlen(s2);
	d = i + j;

	s = malloc(sizeof(*s) * (d + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < i; a++)
	{
		s[a] = s1[a];
	}
	for (b = 0; b < j; b++)
	{
		s[a + b] = s2[b];
	}

	s[a + b] = '\0'; /*THIS IS TO ENSURE THE LAST CHARACTER OF THE ARRAY
			* IS NULL TERMINATED
			*/
	return (s);
	}
