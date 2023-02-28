#include <stdio.h>
#include "main.h"

/**
 * swap_int - function to swap values of two integers
 * @a: integer 1
 *@b: integer 2
 * temp : iinteger 2 holder
 * swap : integer 1 holder
 */

void swap_int(int *a, int *b)
{
	int swap;
	int temp;

	temp = *a;
	swap = *b;
	*a = swap;
	*b = temp;
}
