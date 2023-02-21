#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints _putchar, followed by a new line.
 * Description : to print _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char name[] = "_putchar";

	hello(name);

	return (0);
}

void hello(char name[])
{
	printf("%s\n", name);
}
