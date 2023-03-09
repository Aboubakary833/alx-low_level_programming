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
r = 0;
r += _sqrt_recursion(n - 1);
}
return (r);
}
