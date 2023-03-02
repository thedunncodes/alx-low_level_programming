#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase.
 * @s: pointer to STR
 * Return: arrray s
 */

char *string_toupper(char *s)
{
	int i;
	int len;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		s[i] = toupper(s[i]);
	}

	return (s);
}
