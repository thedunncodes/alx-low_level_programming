#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - so concatenate some characters of s2 to s1
 * @dest: s1 holder
 * @src: s2 holder
 * @n: integer variable
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
