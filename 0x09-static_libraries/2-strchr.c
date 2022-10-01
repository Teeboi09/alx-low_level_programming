#include "main.h"
#include <stdio.h>

/**
 * _strchr - code
 * @s: code
 * @c: code
 * Return: code
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
