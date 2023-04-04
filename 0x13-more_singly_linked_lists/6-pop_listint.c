#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Pop the head from the list
 * @head: The head
 * Return: The value of the head on Success
*/
int pop_listint(listint_t **head)
{
int n;
listint_t *current;
if (head == NULL)
{
	return (0);
}
current = (*head);
n = (*head)->n;
(*head) = (*head)->next;
free(current);
return (n);
}
