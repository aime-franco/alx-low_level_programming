#include "lists.h"

/**
 * list_len - list the number of the element linked
 * @h: pointer to a node
 * Return: size of the element
 */
size_t list_len(const list_t *h)
{
	size_t ways;

	ways = 0;
	while (h != NULL)
	{
		h = h->next;
		ways++;
	}
	return (ways);
}
