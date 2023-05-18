#include "lists.h"

/**
 * get_dnodeint_at_index - Get a node at a given index
 * @head: The dlistint head
 * @index: Node index
 * Return: The given node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
while (head != NULL)
{
	if (index == i)
		return (head);
	head = head->next;
	i++;
}
return (NULL);
}
