#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src with the terminating null
 * @dest: Destination string
 * @src: Source string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
