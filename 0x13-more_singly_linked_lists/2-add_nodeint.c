#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Add new node to the list
 * @head: Pointer to list's head pointer
 * @n: New node value
 * Return: The list on Success
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = (listint_t *)malloc(sizeof(struct listint_s));
if (new_node == NULL)
{
	free(new_node);
	return (NULL);
}
new_node->n = n;
new_node->next = (*head);
(*head) = new_node;
return (*head);
}
