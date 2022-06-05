#include "lists.h"
int len(const char *str);
/**
 * add_node - Creates a node and adds it to a linked list
 * @head: Pointer to head of the linked list
 * @str: String to assigned to the node
 * Return: Pointer to the head of the linked list
 */
list_t *add_node(list_t **head, const char *str)
{   list_t *new;
    size_t nchar;

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
