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
if (head == NULL)
{
	return (0);
}
n = (*head)->n;
free((*head));
return (n);
}
