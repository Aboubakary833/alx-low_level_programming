#include <stdio.h>
#include <string.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
int i = 0;
if (h != NULL)
{
i = 1;
printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
if (h->next != NULL)
{
i += print_list(h->next);
}
}
return ((size_t)i);
}
