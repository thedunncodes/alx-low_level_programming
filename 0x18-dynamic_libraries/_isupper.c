#include "main.h"

/**
 * _isupper - This checks for uppercase character.
 * @c: input character
 * Return: 1 for uppercase and 0 otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
