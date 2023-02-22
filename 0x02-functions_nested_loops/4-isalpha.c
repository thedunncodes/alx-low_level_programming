#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: An input characters.
 * Return: function returns 1 if the character is a
 * letter, lowercase or uppercase and 0 if otherwise.
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
