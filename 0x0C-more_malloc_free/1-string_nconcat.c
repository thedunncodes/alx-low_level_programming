#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * with a give number of size to be added to the
 * first string from the second string
 * @s1: string1
 * @s2: string2
 * @n: size of string 2 to be added to string 1
 * Return: pointer 'cat'
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	int d, e, f;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	e = strlen(s1);
	f = strlen(s2);

	if (n >= f)
		d = e + f;
	else
		d = e + n;

	cat = malloc(sizeof(*cat) * (d + 1));
	if (cat == NULL)
		return (NULL);
	for (i = 0; i < e; i++)
		cat[i] = s1[i];

	for (j = 0; j < n; j++)
		cat[i + j] = s2[j];

	return (cat);
}
