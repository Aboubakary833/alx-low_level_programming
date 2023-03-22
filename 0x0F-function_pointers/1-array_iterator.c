#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - Loop over an array
 * @array: The int array-pointer
 * @size: Array size
 * @action: Callback function
 * Return: void on Success
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || !size || action == NULL)
exit(1);
else
{
unsigned int i;
for (i = 0; i < size; i++)
action(*(array + i));
}
}
