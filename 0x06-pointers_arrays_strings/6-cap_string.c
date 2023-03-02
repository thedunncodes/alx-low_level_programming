#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - a function that capitalizes all words
 * of a string.
 *@t: pointer to STR
 * Return: arrray t
 */

char *cap_string(char *t)
{
	int i = 0;
	int next = 1;

	while (t[i] != '\0')
	{
	if (isspace(t[i]) || ispunct(t[i]))
	{
		next = 1;
	} else if (next)
	{
		t[i] = toupper(t[i]);
		next = 0;
	}
		i++;
	}

	return (t);
}
