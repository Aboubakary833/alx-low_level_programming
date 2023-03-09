/**
* is_prime_number - check if prime
* @n: The int
* Return: int
*/
int is_prime_number(int n)
{
if (n == 1)
return (1);
else if (n < 0)
return (0);
else
{
return (((n % 1) == 0 && (n % n) == 0) ? 1 : 0);
}
}
