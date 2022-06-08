#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data
 * @head: first node 
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *old = head;
	
	if (head = NULL)
		return (0);
	while (old)
	{
		sum =+ old->n;
		old = old->next;
	}
	return (sum);
}
