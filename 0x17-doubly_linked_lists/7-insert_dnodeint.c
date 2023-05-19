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
if (idx == (len - 1) || idx == len)
	return (add_dnodeint_end(h, n));
else if (idx > len)
	return (NULL);
copy = (*h);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
	return (NULL);
new->n = n;
while (copy != NULL)
{
	if (i == idx - 1)
	{
		new->prev = copy->prev;
		new->next = copy->next;
		copy->next = new;
		return (new);
	}
	copy = copy->next;
	i++;
}
free(new);
return (NULL);
}
