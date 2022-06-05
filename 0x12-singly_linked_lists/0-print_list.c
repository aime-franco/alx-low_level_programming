#include "lists.h"

/**
 * print_list - print all the elements of the node
 * @h: pointer to a node
 * Return: size of the node
 */
size_t print_list(const list_t *h)
{
	size_t string;

	string = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		string++;
	}
	return (string);
}
