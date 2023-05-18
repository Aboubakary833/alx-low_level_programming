#include "lists.h"

/**
 * dlistint_len - Count dlistint nodes
 * @h: Double linked list head
 * Return: size of element printed
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *copy = h;
int _size = 0;
while (copy)
{
	_size++;
	copy = copy->next;
}
return ((size_t)_size);
}
