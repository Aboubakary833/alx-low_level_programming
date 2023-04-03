#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Add a node to the end of the list
 * @head: Pointer to list's head pointer
 * @n: The new node value
 * Return: new element on Success
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = (listint_t *)malloc(sizeof(struct listint_s));
listint_t *prev_node;
if (new_node == NULL)
{
	free(new_node);
	return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if ((*head) == NULL)
	(*head) = new_node;
else
{
	prev_node = (*head);
	while (prev_node->next != NULL)
	{
		prev_node = prev_node->next;
	}
	prev_node->next = new_node;
}
return (*head);
}
