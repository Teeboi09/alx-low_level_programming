#include <unistd.h>

/**
 * _putchar - code
 * @c: code
 *
 * Return: code
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
