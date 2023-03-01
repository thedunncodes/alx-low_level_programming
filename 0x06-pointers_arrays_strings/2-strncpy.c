#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: s1 holder
 * @src: s2 holder
 * @n: integer variable
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
