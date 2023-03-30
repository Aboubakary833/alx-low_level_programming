#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print a list elements
 * @h: The list head
 * Return: SizeOf the list elements
*/
size_t print_list(const list_t *h)
{
int i = 0;
if (h != NULL)
{
i = 1;
printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
if (h->next != NULL)
{
i += print_list(h->next);
}
}
return ((size_t)i);
}
