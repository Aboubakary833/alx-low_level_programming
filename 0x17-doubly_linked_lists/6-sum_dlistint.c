#include "lists.h"

/**
 * sum_dlistint - Sum all dlistint node values
 * @head: The dlistint head
 * Return: The sum
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *copy = head;
while (copy != NULL)
{
	sum += copy->n;
	copy = copy->next;
}
return (sum);
}
