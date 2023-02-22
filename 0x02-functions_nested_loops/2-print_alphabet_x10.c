#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lower case 10times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int h;

	for (h = 0; h < 10; h++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
