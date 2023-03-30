#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Add new element to the list
 * @head: List head's pointer-pointer
 * @str: Init string
 * Return: Pointer to added element or NULL
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = (list_t *)malloc(sizeof(struct list_s));
if (new_node == NULL)
{
return (NULL);
}

new_node->str = strdup(str);
new_node->len = strlen(new_node->str);
new_node->next = (*head);
(*head) = new_node;
return (*head);
}
