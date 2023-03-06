#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - check the code
 * @s: memory area pointed too
 * @b: constant byte
 * @n: unsigned int
 * Return: memset.
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (memset);
}
