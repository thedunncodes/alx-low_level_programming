#include "main.h"

/**
 * _strcat - Function to concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
