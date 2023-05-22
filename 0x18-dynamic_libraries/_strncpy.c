#include "main.h"

/**
 * _strncpy - This function copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to be copied
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
