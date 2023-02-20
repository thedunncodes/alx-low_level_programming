#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';

	for (ch = '0' ; ch <= '9' ; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}
