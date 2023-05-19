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
unsigned int i = 1;
copy = (*head);
if (copy != NULL)
{
	while (copy->prev != NULL)
		copy = copy->prev;
}
if (copy == NULL)
	return (-1);
else if (index == 0)
{
	temp = (*head)->next;
	free((*head));
	(*head) = temp;
	if ((*head) != NULL)
		(*head)->prev = NULL;
	return (1);
}
while (copy)
{
	if (index == i - 1)
	{
		temp = copy->prev;
		if (temp)
			temp->next = copy->next;
		else
		{
			temp = copy->next;
			temp->prev = copy->prev;
		}
		free(copy);
		copy = temp;
		return (1);
	}
	i++;
	copy = copy->next;
}
return (-1);
}
