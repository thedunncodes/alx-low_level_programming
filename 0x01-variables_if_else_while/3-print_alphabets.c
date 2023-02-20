#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char cb = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	for (cb = 'A'; cb <= 'Z'; cb++)
	putchar(cb);
	putchar('\n');


	return (0);
}
