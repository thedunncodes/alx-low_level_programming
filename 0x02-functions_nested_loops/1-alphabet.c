#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabet in lower case
 * @ch: to print a character
 */

void print_alphabet(char ch)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
}
