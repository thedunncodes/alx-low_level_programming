#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumx;
	unsigned int i;
	int add;

	add = 0;

	if (n == 0)
		return (0);

	va_start(sumx, n);

	for (i = 0; i < n; i++)
		add += va_arg(sumx, int);

	va_end(sumx);
	return (add);
}
