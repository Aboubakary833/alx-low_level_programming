#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free allocated memory of a list
 * @head: List head's pointer
 * Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *next;
while ((*head) != NULL)
{
	next = (*head)->next;
	free(*head);
	(*head) = next;
}
head = NULL;
}
