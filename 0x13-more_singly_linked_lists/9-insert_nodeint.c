#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Insert element at a given position
 * @head: The head pointer-pointer
 * @idx: The index
 * @n: The value of the element
 * Return: Pointer to the inserted element on Success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *cur, *new_node;
unsigned int i = 0;
new_node = (listint_t *)malloc(sizeof(struct listint_s));
if (new_node == NULL)
{
	free(new_node);
	return (NULL);
}
new_node->n = n;
if (idx == 0)
{
	new_node->next = (*head);
	*head = new_node;
	return (*head);
}
cur = (*head);
for (; i < (idx - 1); i++)
{
	if (cur == NULL)
	{
		return (NULL);
	}
	cur = cur->next;
}
new_node->next = cur->next;
cur->next = new_node;

return (new_node);
}
