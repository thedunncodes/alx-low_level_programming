#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 * At line 21 --> i = (s1 != NULL) ? strlen(s1) : 0; <-- this can also work
 * remember the Ternary condition "? and :" it works like if else
 * At line 26 --> j = (s2 != NULL) ? strlen(s2) : 0; <-- this can also work
 * remember the Ternary condition "? and :" it works like if else
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, d;
	int a, b;
	char *s;

	if (s1 != NULL)
		i = strlen(s1);
	else
		i = 0;

	if (s2 != NULL)
		j = strlen(s2);
	else
		j = 0;

	d = i + j;

	s = malloc(sizeof(*s) * (d + 1));
	if (s == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		s[a] = s1[a];

	for (b = 0; b < j; b++)
		s[a + b] = s2[b];

	s[a + b] = '\0';
/*THE LINE ABOVE ENSURES THE LAST CHARACTER OF THE ARRAY IS NULL TERMINATED*/

	return (s);
}
