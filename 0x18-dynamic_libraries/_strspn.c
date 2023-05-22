#include "main.h"

/**
 * _strspn - This will get the length of a prefix substring.
 * @s: The input string
 * @accept: The input character to locate into string s
 * Return: A pointer to the c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}
