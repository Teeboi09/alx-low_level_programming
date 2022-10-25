#include "lists.h"
#include <stdio.h>

/**
 * recursion_printer - code
 * @h: code
 * Return: code
 */
size_t recursion_printer(const listint_t *h)
{
	printf("%d\n", h->n);
	return (1 + recursion_printer(h->next));
}
