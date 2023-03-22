#include <stddef.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Get the coresponding operation
 * @s: The symbol of the operation
 * Return: int on success
*/
int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t operations[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
while (operations[i].op)
{
if (strcmp(s, operations[i].op) == 0)
{
return (operations[i].f);
}
i++;
}
return (NULL);
}
