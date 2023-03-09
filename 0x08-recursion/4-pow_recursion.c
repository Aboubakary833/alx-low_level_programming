/**
 * _pow_recursion - Return value fraise by a int
 * @x: The int x
 * @y: The int y
 * Return: int
*/
int _pow_recursion(int x, int y)
{
return ((y >= 0) && (x * _pow_recursion(x, (y - 1))));
}
