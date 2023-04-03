#include "lists.h"

/**
 * listint_len - Count a list elements
 * @h: List's head
 * Return: The sizeOf the list
*/
size_t listint_len(const listint_t *h)
{
	int i = 0;
	if (h != NULL)
	{
		i = 1;
		i += listint_len(h->next);
	}

	return ((size_t)i);
}
