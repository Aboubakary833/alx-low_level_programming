/**
 * flip_bits - Count the number of bits that will be flipped
 * @n: First integer
 * @m: Second integer
 * Return: Total bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	int count = 0;

	while (i)
	{
		count += i & 1;
		i >>= 1;
	}
	return (count);
}
