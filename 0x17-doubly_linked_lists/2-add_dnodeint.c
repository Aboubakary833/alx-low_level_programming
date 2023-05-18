#include "lists.h"

/**
 * add_dnodeint - Add new node to a dlistint or create one
 * @head: The double linked list head
 * @n: Value of the new node
 * Return: address to the new dlistint_t node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
if (new == NULL)
	return (NULL);
new->n = n;
new->next = (*head);
if ((*head) != NULL)
	(*head)->prev = new;
(*head) = new;
return (new);
}
