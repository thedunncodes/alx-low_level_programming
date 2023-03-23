#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *hld;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
	hld = va_arg(str, char *);

	if (hld == NULL)
		printf("(nil)");
	else
		printf("%s", hld);

	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
