#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * @head: pointer to the first node
 * @index: index for node to be deleted
 * Return: 1 success or -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old = *head;
	listint_t *current = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
		{
			*head = (*head)->next;
			free(old);
			return (1);
		}
	while (x < index - 1)
	{
		if (!old || !(old->next))
			return (-1);
		old = old->next;
		x++;
	}
	current = old->next;
	old->next = current->next;
	free(current);
	return (1);
}
