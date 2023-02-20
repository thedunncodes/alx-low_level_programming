/* This program will assign a random number to the variable n each time it is executed. */
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * line 17 - 18 generates a random number
 * 
 * line 20 - 22 specifies condition for the type of number
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
	printf("%d is negative", n);
}
	if (n = 0)
{
	printf("%d is zero", n);
}
	if (n > 0)
{
	printf("%d is positive", n);
}
	return (0);
}
