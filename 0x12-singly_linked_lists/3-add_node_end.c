#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Add new element to the list
 * @head: List head's pointer-pointer
 * @str: Init string
 * Return: Pointer to added element or NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *prev_node;
list_t *new_node = (list_t *)malloc(sizeof(struct list_s));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}

new_node->str = strdup(str);
new_node->len = strlen(str);
if ((*head) == NULL)
{
(*head) = new_node;
(*head)->next = NULL;
}
else
{
prev_node = (*head);
while (prev_node->next != NULL)
{
prev_node = prev_node->next;
}
prev_node->next = new_node;
}
return (*head);
}
