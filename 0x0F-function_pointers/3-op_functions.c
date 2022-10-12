#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - code
 * @a: code
 * @b: code
 * Return: code
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - code
 * @a: code
 * @b: code
 * Return: code
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - code
 * @a: code
 * @b: code
 * Return: code
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - code
 * @a: code
 * @b: code
 * Return: code
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - code
 * @a: code
 * @b: code
 * Return: code
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
