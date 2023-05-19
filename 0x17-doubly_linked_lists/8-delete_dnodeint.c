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
if (index == 0 && (*head))
{
	temp = (*head)->next;
	temp->prev = NULL;
	copy = temp;
}
else if ((*head) == NULL)
	return (-1);

while (copy)
{
	
}

}
