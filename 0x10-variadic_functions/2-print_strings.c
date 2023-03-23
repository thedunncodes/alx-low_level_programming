#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints a list of strings separated by a given string
 *
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 * @...: variable arguments list
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
	printf("%s", va_arg(str, char *));
	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
