#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: The input string to search in
 * @c: The input character to locate into string s
 * Return: A Pointer to the c position
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
