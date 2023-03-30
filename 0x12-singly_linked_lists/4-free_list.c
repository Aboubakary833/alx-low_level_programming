#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free allocated memory of a list
 * @head: List head's pointer
 * Return: void
*/
void free_list(list_t *head)
{
list_t *next;
while (head)
{
if (head->next)
{
next = head->next;
}
free(head->str);
free(head);
head = next;
}
}
