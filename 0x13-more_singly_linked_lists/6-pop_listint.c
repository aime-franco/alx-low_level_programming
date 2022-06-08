#include "lists.h"

/**
 * pop_listint - delete the first node
 * @head: contains the list
 * Return: element in the list or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *old;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	num = (*head)->next;
	free(*head);
	*head = old;
	return (num)
}
