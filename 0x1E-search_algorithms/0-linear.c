#include "search_algos.h"

/**
 * linear_search - A search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: Targeted value to be searched
 * Return: -1 on empty array or unseen value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == value)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				return (i);
			}
			if (array[i] != value)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			}
		}
	}

	return (-1);
}
