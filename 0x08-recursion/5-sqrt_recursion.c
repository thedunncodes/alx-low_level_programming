#include "main.h"
int _sqrt(int prevV, int root);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: an input integer
 * Return: If n does not have a natural square root, return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - find square root
 * @prevV: previous value
 * @root: square root value
 * Return: the square root
 */
int _sqrt(int prevV, int root)
{
	if (prevV > root)
		return (-1);
	else if (prevV * prevV == root)
		return (prevV);
	return (_sqrt(prevV + 1, root));
}
