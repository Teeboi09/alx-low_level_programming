#include "main.h"

/**
 * _strcat - code
 * @dest: code
 * @src: code
 * Return: code
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
