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
copy = (*head);
while (copy)
{
	if (i == index)
	{
		temp = copy->prev;
		copy = copy->next;
		copy->prev = temp;
		return (1);
	}
}
return (-1);
}
