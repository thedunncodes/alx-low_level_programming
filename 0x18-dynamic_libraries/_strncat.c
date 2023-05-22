#include "main.h"

/**
 * _strncat - This concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to be concatenated
 * Return: The pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j] && j < n; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
