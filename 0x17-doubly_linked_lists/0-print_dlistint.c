#include "lists.h"

/**
 * print_dlistint - Print all nodes of a dlistint
 * @h: Double linked list head
 * Return: size of element printed
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *copy = h;
int _size = 0;
while (copy)
{
	printf("%d\n", copy->n);
	_size++;
	copy = copy->next;
}
return ((size_t)_size);
}
