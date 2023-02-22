#include <stdio.h>
#include "main.h"
/**
 * main - Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 * print_alphabet: prints alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char cb = '\n';

	print_alphabet(ch, cb);
	return (0);
}

/**
 * print_alphabet - prints alphabet in lower case
 * @ch: to print a character
 */

void print_alphabet(char ch, char cb)
{
	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar(cb);
}
