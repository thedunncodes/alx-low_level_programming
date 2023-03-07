#include <stdio.h>
#include  "main.h"

/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

	while (*h && *n && *h == *n)
	{
		h++;
		n++;
	}
	if (!*n)
	{
		return (haystack);
	}
	haystack++;
	}
	return (NULL);
}
