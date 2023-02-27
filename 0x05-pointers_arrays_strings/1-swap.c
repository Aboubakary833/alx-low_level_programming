/**
 * swap_int - Swap two integer values
 * @a: First integer
 * @b: Second integer
 * Return: void
*/
void swap_int(int *a, int *b)
{
int aVal = *a;
int bVal = *b;
*a = bVal;
*b = aVal;
}
