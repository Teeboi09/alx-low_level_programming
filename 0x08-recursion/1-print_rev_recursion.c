#include "main.h"

/**
 * _print_rev_recursion - code
 * @s: code
 * Return: code
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
