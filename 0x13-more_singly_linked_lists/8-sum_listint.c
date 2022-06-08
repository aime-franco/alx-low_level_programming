#include "lists.h"

/**
 * sum_listint - calculate the sum of the data
 * @head: contains first node
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;
	
	sum = 0;
	if (head == NULL)
		return (0);
	while(head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
