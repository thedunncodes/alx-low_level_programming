#include <stdio.h>
#include <string.h>
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

	for (i = n - 1; i >= 0; i--)
{
	fprintf(stdout, "%d", a[i]);

	if (i != 0)
	{
		putchar(',');
		putchar(' ');
	}
}
	putchar('\n');

	/*exit(0);*/
}
