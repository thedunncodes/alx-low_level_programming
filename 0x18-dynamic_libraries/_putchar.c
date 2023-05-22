#include <unistd.h>
#include "main.h"

/**
 * _putchar - does same function as putchar
 * @c: Character to print
 * Return: On success 1 and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
