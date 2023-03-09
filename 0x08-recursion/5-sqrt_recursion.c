/**
 * handle_sqrt - Handle result
 * @i: The number
 * @j: The int to check with
 * Return: int
*/
int handle_sqrt(int i, int j)
{
if (i == j)
return (-1);
else if (i == (j * j))
{
return (j);
}
j++;
return (handle_sqrt(i, j));
}

/**
 * _sqrt_recursion - Return sqrt of a int
 * @n: The int
 * Return: int
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 1)
return (1);
return (handle_sqrt(n, 1));
}
