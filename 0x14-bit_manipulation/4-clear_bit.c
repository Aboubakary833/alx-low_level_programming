/**
 * clear_bit - Set value of a bit to one
 * @n: The number to manipulate pointer
 * @index: Bit's index
 * Return: 1 on Success or -1 on Error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
int m;
if (index >= (sizeof(unsigned long int) * 8))
{
	return (-1);
}
m = (1 << index);
(*n) = ((*n) & ~m);
return (1);
}
