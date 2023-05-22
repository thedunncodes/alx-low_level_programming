#include "main.h"

/**
 * _memset - This fills memory with constant bytes
 * @s: The location to fill
 * @b: The char to fill location with
 * @n: number of bytes to be filled
 * Return: returns pointer to the location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *begin = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (begin);
}
