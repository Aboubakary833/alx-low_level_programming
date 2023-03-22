#include <stddef.h>
#include <stdlib.h>

/**
 * int_index - Search for an int in an array
 * @array: The array
 * @size: The array's size
 * @cmp: Callback function
 * Return: the index of the int on Success
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
if (size < 0)
return (-1);
else
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
}
else
return (-1);
}
