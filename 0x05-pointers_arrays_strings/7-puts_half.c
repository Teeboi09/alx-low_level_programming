#include "main.h"

int get_length(char *);

/**
 * puts_half - print the second half of a string
 * @str: String to be printed out
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length;
	int n;
	int start;

	length = get_length(str);
	if (length % 2 != 0)
	{
		n = (length - 1) / 2;
		start = length - n;
		while (str[start] != '\0')
		{
		_putchar(str[start]);
		start++;
		}
	}
	else
	{
		n = length / 2;
		start = length - n;
		while (str[start] != '\0')
		{
			_putchar(str[start]);
			start++;
		}
	}
	_putchar('\n');
}

/**
 * get_length - determines the length of a string
 * @str: String whose length we want
 *
 * Return: length
 */
int get_length(char *str)
{
	int length;
	int i;

	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		++length;
		i++;
	}

	return (length);
}
