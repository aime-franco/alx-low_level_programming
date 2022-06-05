#include "lists.h"

/**
 * add_node - add new node at the beggining
 * @str: contains the list
 * @head: contains linked list
 * Return: address to the head
 */
list_t *add_node(list_ **head, const char *str)
{
	list_t *new;
	list_t *nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)
		;
	new->len = nchar;
	new->next = *head;
	*head = new;
	return (*head);
}
