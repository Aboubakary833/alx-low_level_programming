/**
 * factorial - Return a factorial of a int
 * @n: The int
 * Return: int
*/
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial((n - 1)));
}
