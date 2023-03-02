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
	int i;

	i = n - 1;

	while (i >= 0)
	{
	fprintf(stdout, "%d", a[i]);
	if (i != 0)
	{
		putchar(',');
		putchar(' ');
	}
		i--;
	}
		putchar('\n');

		exit(0);
}
