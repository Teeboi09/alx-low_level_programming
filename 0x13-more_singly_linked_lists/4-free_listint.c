#include "lists.h"

/**
 * free_listint - code
 * @head: code
 * Return: code
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
