#include "main.h"

/**
 * _strlen -  code
 * @s: code
 * Return: code
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
