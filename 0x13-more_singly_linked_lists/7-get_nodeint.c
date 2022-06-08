#include "lists.h"

/**
 * get_nodeint - returns the node at certain index
 * @head: contains the linked list
 * @index: index of the return node
 * Return: pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *old = head;

	while (old && x < index)
	{
		old = old->next;
		x++;
	}
	return (old ? old: NULL);
}
