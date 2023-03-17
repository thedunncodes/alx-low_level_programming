#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array and initializes it with zeros
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cllc;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	cllc = malloc(size * nmemb);
	if (cllc == 0)
	{
		return (NULL);
	}

	memset(cllc, 0, size * nmemb);

	return (cllc);
}
