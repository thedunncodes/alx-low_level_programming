#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints _putchar, followed by a new line.
 * Description : to print _putchar
 * Return: Always 0 (Success)
 * name:  to print _putchar
 */
int main(void)
{
	char name[] = "_putchar";

	hello(name);

	return (0);
}

/**
 * hello - Write a program that prints _putchar, followed by a new line.
 * @name: to print _putchar
 */


void hello(char name[])
{
	char name[];

	printf("%s\n", name);
}
