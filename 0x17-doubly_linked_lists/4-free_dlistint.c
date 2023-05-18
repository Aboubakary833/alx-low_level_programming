#include "lists.h"

/**
 * free_dlistint - Free a dlistint
 * @head: Double linked list head
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *next;
while (head != NULL)
{
	next = head->next;
	free(head);
	head = next;
}
}
