#include "lists.h"

/**
 * sum_listint - Calculate the sum of list's elements
 * @head: List's head
 * Return: The sum on Success
*/
int sum_listint(listint_t *head)
{
	listint_t *first, *next;
	int sum = 0;

	first = head;
	while (head)
	{
		next = head->next;
		sum += head->n;
		head = next;
	}
	head = first;
	return (sum);
}
