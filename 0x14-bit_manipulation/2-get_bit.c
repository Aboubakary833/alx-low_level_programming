/**
 * get_bit - Get bit at a given index of number's binary rep
 * @n: The number
 * @index: Index of the bit
 * Return: the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (n >> index & 1);
}
