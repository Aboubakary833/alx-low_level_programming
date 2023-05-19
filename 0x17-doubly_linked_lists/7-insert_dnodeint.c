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
dlistint_t *new;
dlistint_t *copy;
unsigned int i = 0;

new = NULL;
if (idx == 0)
new = add_dnodeint(h, n);
else
{
copy = *h;
if (copy != NULL)
while (copy->prev != NULL)
	copy = copy->prev;
while (copy != NULL)
{
if ((i + 1) == idx)
{
	if (copy->next == NULL)
		new = add_dnodeint_end(h, n);
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (new != NULL)
		{
			new->n = n;
			new->next = copy->next;
			new->prev = copy;
			copy->next->prev = new;
			copy->next = new;
		}
	}
	break;
}
copy = copy->next;
i++;
}
}
return (new);
}
