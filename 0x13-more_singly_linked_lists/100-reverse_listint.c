#include "lists.h"

/**
 * reverse_listint - Reverse a int list
 * @head: The list head
 * Return: Pointer to the first head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur, *next;
	while ((*head) != NULL)
	{
		next = (*head)->next;
		(*head)->next = cur;
		cur = (*head);
		(*head) = next;
	}
	(*head) = cur;
	return (*head);
}
