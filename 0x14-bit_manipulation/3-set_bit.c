/**
 * set_bit - Set value of a bit to one
 * @n: The number to manipulate
 * @index: Bit's index
 * Return: 1 on Success or -1 on Error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	(*n) = (*n) | (index >> 1);
	return (1);
}
