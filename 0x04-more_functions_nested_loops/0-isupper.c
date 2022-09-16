#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: is the int used for the argument of the function
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
