#include "main.h"

/**
 * _memset - code
 * @s: code
 * @b: code
 * @n: code
 * Return: code
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
