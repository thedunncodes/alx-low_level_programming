#include <stdio.h>
#include "main.h"
/**
 * _puts - function to write to stdout
 * str - string to point to
 */

void _puts(char *str)
{
	fputs(str, stdout);
	fputs("\n", stdout);
}
