#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a given node
 * @head: Double linked list head
 * @index: Index of node to delete
 * Return: 1 if successed or -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *copy, *temp;
unsigned int i = 0;
if ((*head) == NULL)
	return (-1);
copy = (*head);
while (copy)
{
	if (i == index)
	{
		temp = copy->prev;
		temp->next = copy->next;
		free(copy);
		copy = temp;
		return (1);
	}
	copy = copy->next;
}
return (-1);
}
