#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: An input string
 * Return: Nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

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
	unsigned int d, e, f;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	e = _strlen(s1);
	f = _strlen(s2);

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

	cat[i  + j] = '\0';
	return (cat);
}
