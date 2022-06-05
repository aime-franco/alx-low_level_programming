#include "lists.h"

/**
 * list_len - list the number of the element linked
 * @h: pointer to a node
 * Return: size of the element
 */
size_t list_len(const list_t *h)
{
	int x;

	if (h == NULL)
		return (0);
	for (x = 1; h->next != NULL, x++)
	{
		h = h->next;
	}
	return (x);
}
