/**
 * _strlen_recursion - Return the length of a string
 * @s: The string
 * Return: int
*/
int _strlen_recursion(char *s)
{
int l = 0;
if (s[0] != '\0')
{
l += 1;
l += _strlen_recursion(s + 1);
}

return (l);
}
