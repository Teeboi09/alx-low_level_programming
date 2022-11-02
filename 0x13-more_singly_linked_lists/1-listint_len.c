#include "lists.h"
#include <stdio.h>

/**
 * listint_len - code
 * @h: code
 * Return: code
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
