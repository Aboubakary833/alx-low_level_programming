/**
 * _pow_recursion - Return value fraise by a int
 * @x: The int x
 * @y: The int y
 * Return: int
*/
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
return (-1);
else
return (x * _pow_recursion(x, (y - 1)));
}
