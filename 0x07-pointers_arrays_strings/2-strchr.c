#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - check the code
 * @s: where the first occurence of 'c' is returned to
 * and and printed to the end
 * @c: character to return to 's'
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = strlen(s);

	while (i < len)
	{
		if ((s[i] == c) && (j == 0))
		{
			j = 1;
		}
		if (j == 1)
		{
			return ((char *) &s[i]);
		}
			i++;
		}

		return (0);
}
