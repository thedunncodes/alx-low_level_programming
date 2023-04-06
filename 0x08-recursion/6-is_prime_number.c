#include "main.h"
int is_divisible(int num, int division);

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: input integer
 * Return: 1 if n is prime or  0 if otherwise
 */
int is_prime_number(int n)
{
	int division = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, division));
}

/**
 * is_divisible - check if num is divisible
 * @num: the number to be checked
 * @division: division result
 * Return: divisible number, else 0
 */
int is_divisible(int num, int division)
{
	if (num % division == 0)
		return (0);

	if (division == num / 2)
		return (1);

	return (is_divisible(num, division + 1));
}
