/**
 * get_bit - Get bit at a given index of number's binary rep
 * @n: The number
 * @index: Index of the bit
 * Return: the bit or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
int result = -1;
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
while (n)
{
	if (index == 0)
	{
		result = (n & 1);
		break;
	}
	n >>= 1;
	index--;
}
return (result);
}
