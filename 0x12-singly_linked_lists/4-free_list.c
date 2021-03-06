#include "lists.h"

/**
 * free_list - frees a list
 * @head: contains the head of linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *old;

	while ((old = head) != NULL)
	{
		head = head->next;
		free(old->str);
		free(old);
	}
}
