#include "lists.h"

/**
 * list_len - Count a list element
 * @h: The list head
 * Return: SizeOf the list elements
*/
size_t list_len(const list_t *h)
{
int i = 0;
if (h != 0)
{
i = 1;
if (h->next != NULL)
{
i += list_len(h->next);
}
return (i);
}
}
