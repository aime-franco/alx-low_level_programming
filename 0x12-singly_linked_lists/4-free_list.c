#include "lists.h"

/**
 * free_list - frees a list
 * @head: contains the head of linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *old;

	if (head == NULL)
		return;
	while (head-> != NULL)
	{
		old = head->next;
		free(head->next);
		free(head);
		head = old;
	}
	free(head->str);
	free(head);
}
