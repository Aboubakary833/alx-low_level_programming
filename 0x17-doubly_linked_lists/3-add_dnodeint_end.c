#include "lists.h"

/**
 * add_dnodeint_end - Add new node to the end of a dlistint
 * @head: The double linked list head
 * @n: Node value
 * Return: New node address or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *prev_node;
new = malloc(sizeof(struct dlistint_s));
if (new == NULL)
	return (NULL);
new->n = n;
new->next = NULL;
if ((*head) == NULL)
{
	new->prev = NULL;
	(*head) = new;
	return (*head);
}
prev_node = (*head);
while (prev_node->next != NULL)
{
	prev_node = prev_node->next;
}
prev_node->next = new;
new->prev = prev_node;
return (new);
}
