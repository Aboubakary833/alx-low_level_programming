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
if (copy == NULL)
	return (-1);
while (copy->prev != NULL)
	copy = copy->prev;
if (index == 0)
{
	temp = (*head)->next;
	free((*head));
	(*head) = temp;
	if ((*head) != NULL)
		(*head)->prev = NULL;
	return (1);
}
while (copy && i++)
	copy = copy->next;
if (!copy)
	return (-1);
else if (copy->prev && copy->next)
{
	copy->next->prev = copy->prev;
	copy->prev->next = copy->next;
	free(copy);
}
else if (!copy->next)
{
	copy->prev->next = NULL;
	free(copy);
}

return (1);

}
