#include "lists.h"

/**
 * add_nodeint - add node at the beggining
 * @head: contains first node
 * @n: contains the linked list
 * Retutrn: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
