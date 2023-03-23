#include "variadic_functions.h"

/**
 * print_numbers - prints a list of numbers separated by a given string
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: variable arguments list
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prt;
	unsigned int i;

	va_start(prt, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(prt, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	putchar('\n');
	va_end(prt);
}
