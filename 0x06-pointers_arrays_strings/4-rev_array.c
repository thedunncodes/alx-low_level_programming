#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * reverse_array - a function that reverses
 * the content of an array of integers.
 * @n: size of array 'a'
 * @a: array 'a'
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int N = n - 1;
	int swap;

	while (i < N)
	{
		swap = a[i];
		a[i] = a[N];
		a[N] = swap;
		i++;
		N--;
	}
}
