#include "lists.h"

/**
 * sum_listint - calculate the sum of the data
 * @head: contains first node
 * Return: sum of the data
 */
int sum_listint(listint_t *head);
{
	listint_t *old = head;
	unsigned int sum = 0;

	while(old)
	{
		sum += old->n;
		old = old->next;
	}
	return (sum);
}
