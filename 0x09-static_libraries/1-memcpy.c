#include "main.h"

/**
 * _memcpy - code
 * @dest: code
 * @src: code
 * @n: code
 * Return: code
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
