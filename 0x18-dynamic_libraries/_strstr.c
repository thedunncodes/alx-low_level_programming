#include "main.h"
#include <stdio.h>

/**
 * _strstr - This wil locate a substring
 * @haystack: the string that will be scanned
 * @needle: A string containing sequence of characters to match.
 * Return: returns a pointer to the beginning of the located substring, or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i + j]; j++)
			if (haystack[i + j] != needle[j])
				break;
		if (!needle[j])
			return (haystack + i);
	}
	return (NULL);
}
