#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - creates an array of integers containing values from min to max
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: a pointer to the array of integers, or NULL if an error occurs
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
	return (NULL);
	}

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
