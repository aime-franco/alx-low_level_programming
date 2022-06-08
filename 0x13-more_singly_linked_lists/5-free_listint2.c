#include "lists.h"

/**
 * free_listint2 - frees the linked list
 * @head: contains the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *old;

	if (head == NULL)
		return;
	while (*head)
	{
		old = (*head)->next;
		free(*head);
		*head = old;
	}
	*head = NULL;
}
