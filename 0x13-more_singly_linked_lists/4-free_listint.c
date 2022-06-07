#include "lists.h"

/**
 * free_listint - frees the linked list
 * @head: contains the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *old;

	while (head)
	{
		old = head->next;
		free(head);
		head = old;
	}
}
