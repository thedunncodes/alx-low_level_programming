#include "search_algos.h"

/**
 * binary_search - A binary search algorithm
 * @array: Array to be halved until value is found
 * @size: size of array in unsigned int
 * @value: value to be searched
 * Return: search function
 */

int binary_search(int *array, size_t size, int value)
{
	size_t end;
	size_t start;

	end = size - 1;
	start = 0;

	if (!(array))
	{
		return (-1);
	}
	return (search(array, start, end, value));

}

/**
 * search - A binary search algorithm function
 * @array: Array to be halved until value is found
 * @start: index to start searching
 * @end: index to stop searching
 * @value: value to be searched
 * Return: -1 on error/failure to find value
 */

int search(int *array, size_t start, size_t end, int value)
{
	size_t midIndex;
	size_t i;


	if (!(start > end))
	{
		printf("Searching in array:  ");
		for (i = start; i <= end ; i++)
		{
			if (i != end)
			{
				printf("%d, ", array[i]);
			} else
			{
				printf("%d", array[i]);
			}
		}
		printf("\n");
	} else
	{
		return (-1);
	}

	midIndex = (start + end) / 2;

	if (array[midIndex] == value)
	{
		return (midIndex);
	}

	if (array[midIndex] > value)
	{
		return (search(array, start, midIndex - 1, value));
	}
	if (array[midIndex] <= value)
	{
		return (search(array, midIndex + 1, end, value));
	}

	return (-1);
}
