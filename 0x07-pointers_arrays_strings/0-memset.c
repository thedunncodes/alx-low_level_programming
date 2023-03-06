#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - check the code
 * @s: memory area pointed too
 * @b: constant byte
 * @n: unsigned int
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
