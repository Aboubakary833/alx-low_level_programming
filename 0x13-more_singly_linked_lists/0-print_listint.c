#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print a list
 * @h: The list's head
 * Return: List size on Success
*/
size_t print_listint(const listint_t *h)
{
int i = 0;
if (h != NULL)
{
	i = 1;
	printf("%d\n", h->n);
	i += print_listint(h->next);
}
return ((size_t)i);
}
