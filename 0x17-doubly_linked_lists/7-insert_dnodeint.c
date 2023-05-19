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
unsigned int i;

new = NULL;
if (idx == 0)
	new = add_dnodeint(h, n);
copy = *h;
i = 1;
if (copy != NULL)
	while (copy->prev != NULL)
		copy = copy->prev;
while (copy != NULL)
{
	if (i == idx)
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
return (new);
}
