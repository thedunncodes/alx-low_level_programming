#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: unsigned integer
 * Return: void.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *m;

	m = (int *)malloc(sizeof(*m) * b);
	if (m == NULL)
	{
		exit(98);
	}
}
