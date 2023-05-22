#include "main.h"

/**
 * _isalpha - function to check for letters upper or lower case
 * @c: input character
 * Return: 1 or 0 for alphabets and nonalpha respectively
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
