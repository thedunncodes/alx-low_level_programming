#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the array to search in
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which cmp function does not return 0,
 *         or -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
