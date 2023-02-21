#include <stdio.h>
#include "main.h"

/**
 * main - Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Description: prints alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	print_alphabet(ch);

	return (0);
}

void print_alphabet(char ch)
{
	ch;

	for (ch ; ch <= 'z' ; ch++)
	putchar(ch);
	putchar('\n');
}
