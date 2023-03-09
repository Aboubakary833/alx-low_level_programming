/**
 * _sqrt_recursion - Return sqrt of a int
 * @n: The int
 * Return: int
*/
int _sqrt_recursion(int n)
{
int r = -1;
if (n < 0)
return (r);
else
{
r += 1;
if ((n % 2) != 0)
--n;
r += _sqrt_recursion(n / 2);
}
return (r);
}
