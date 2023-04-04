#include "lists.h"

/**
 * get_nodeint_at_index - Find node at index
 * @head: The list's head
 * @index: The index of the element to find
 * Return: Found element
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *prev, *first, *found = NULL;
unsigned int i;
if (head != NULL && index != 0)
{
	i = 0;
	first = head;
	while (head->next != NULL)
	{
		if (index == i)
		{
			found = head;
			head = first;
			break;
		}
		prev = head->next;
		head = prev;
		i++;
	}
	return (found != NULL ? found : NULL);
}
return (NULL);
}
