#include "lists.h"
#include <string.h>

/**
 * add_nodeint - code
 * @head: code
 * @n: code
 * Return: code
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
