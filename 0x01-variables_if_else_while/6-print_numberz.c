#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';

	for (a = '0' ; a <= '9' ; a++)
	putchar(a);
	putchar('\n');

	return (0);
}
