/**
* is_prime_number - check if prime
* @n: The int
* Return: int
*/
int is_prime_number(int n)
{
return (((n % 1) == 0 && (n % n) == 0) ? 1 : 0);
}
