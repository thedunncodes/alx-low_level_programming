#include "main.h"

/**
 * _memcpy - this function that copies memory area
 * @dest: The memory area destination to copy to
 * @src: the memory area to copy from
 * @n: The number of bytes
 * Return: Pointer to the copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *begin = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (begin);
}
