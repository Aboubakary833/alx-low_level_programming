#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Free allocated memory of a list
 * @head: List head's pointer
 * Return: void
*/
void free_listint(listint_t *head)
{
listint_t *next;
if (head != NULL)
{
	next = head->next;
	free(head);
	free_listint(next);
}
}
