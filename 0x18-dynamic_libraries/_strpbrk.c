#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  This will search a string for any set of bytes.
 * @s: THe input string
 * @accept: The input character to locate into string s
 * Return:  Pointer to the byte in s or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
