#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node at dlistint at a given index
 * @h: dlistint head
 * @idx: The index
 * @n: The value of the node
 * Return: The new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *copy;
unsigned int i = 0, len = 0;
if (idx == 0)
	return (add_dnodeint(h, n));
copy = (*h);
while (copy)
{
	len++;
	copy = copy->next;
}
if (idx == len)
	return (add_dnodeint_end(h, n));
else if (idx > len)
	return (NULL);
copy = (*h);
if (copy != NULL)
	while (copy->prev != NULL)
		copy = copy->prev;
i = 1;
while (copy != NULL)
{
	if ((i + 1) == idx)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = copy->next;
		new->prev = copy;
		copy->next->prev = new;
		copy->next = new;
		return (new);
	}
	copy = copy->next;
	i++;
}
	return (NULL);
}
