#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Delete element from the list
 * @head: List'head
 * @index: The index of the element
 * Return: 1 on Success or -1 on Error
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *cur, *cp;
unsigned int i;
cp = (*head);

if ((*head) == NULL)
{
	return (-1);
}

if (index == 0)
{
	*head = (*head)->next;
	free(cp);
	return (1);
}

for (i = 0; i < (index - 1); i++)
{
	if (cp->next == NULL)
	{
		return (-1);
	}
	cp = cp->next;
}
cur = cp->next;
cp->next = cur->next;
free(cur);
return (1);
}
