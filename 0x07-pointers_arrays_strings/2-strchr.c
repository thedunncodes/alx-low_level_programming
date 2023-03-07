#include <stdio.h>
#include <string.h>

/**
 * _strchr - check the code
 * @s: where the first occurence of 'c' is returned to
 * and and printed to the end
 * @c: character to return to 's'
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;

	i = 0;
	j = 0;
	len = strlen(s);

	while (i < len)
	{
		if ((s[i] == c) && (j == 0))
		{
			j = 1;
		}
		if (j == 1)
		{
			_putchar(s[i]);
		}
			i++;
		}

		return (0);
}
