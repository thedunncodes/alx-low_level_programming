#include <stdio.h>
#include "main.h"

/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: Address of memory to copy from
 * @n: the size of the memory to print
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;

	while (i < n)
	{
		*(dest + i) = src[j];
		i++;
		j++;
	}

	return (dest);
}
