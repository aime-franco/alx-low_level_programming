#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data
 * @head: first node 
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum;
	
	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum =+ head->n;
		head = head->next;
	}
	head = head->next;
	return (sum);
}
