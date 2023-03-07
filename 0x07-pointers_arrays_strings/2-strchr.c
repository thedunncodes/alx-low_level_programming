#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - check the code
 * @s: where the first occurence of 'c' is returned to
 * and and printed to the end
 * @c: character to return to 's'
 * Return: char s[i] for success and NULL for fail
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
			return ((char *) &s[i]);
		}
		if (j == 1)
		{
			return ((char *) &s[i]);
		}
			i++;
	}
	if (s[i] != c)
	{
		return (0);
	}

	return (0);
}
