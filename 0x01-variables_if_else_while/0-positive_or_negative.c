#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*./betty-doc.pl 0-positive_or_negative.c*/
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
{
	printf("%d is negative\n", n);
}
	if (n == 0)
{
	printf("%d is zero\n", n);
}
	if (n > 0)
{
	printf("%d is positive\n", n);
}
	return (0);
}
