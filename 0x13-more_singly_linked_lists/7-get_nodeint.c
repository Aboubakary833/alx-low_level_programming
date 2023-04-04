#include "lists.h"

/**
 * get_nodeint_at_index - Find node at index
 * @head: The list's head
 * @index: The index of the element to find
 * Return: Found element
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *prev;
unsigned i;
if (head != NULL)
{
	i = 0;
	while (head->next != NULL)
	{
		if (index == i)
		{
			return (head);
		}
		prev = head->next;
		head = prev;
		i++;
	}
}
return (NULL);
}
