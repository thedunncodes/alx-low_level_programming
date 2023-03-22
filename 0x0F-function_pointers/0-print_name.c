#include "function_pointers.h"

/**
 * print_name - Prints the given name using a function pointer.
 *
 * @name: The name to be printed.
 * @f: A pointer to a function that takes a char pointer as
 * its argument and returns void.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

