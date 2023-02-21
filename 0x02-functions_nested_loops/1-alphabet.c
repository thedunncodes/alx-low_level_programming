#include <stdio.h>
#include "main.h"

/**
 * main - Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	alphabet(ch);

	return (0);
}

void alphabet(char ch);
{
	ch;

	for (ch ; ch <= 'z' ; ch++)
	putchar(ch);
	putchar('\n');
}
