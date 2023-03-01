#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - so concatenate s2 to s1
 * @dest: s1 holder
 * @src: s2 holder
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
