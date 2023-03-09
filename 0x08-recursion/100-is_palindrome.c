#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string
 * Return: int
*/
int is_palindrome(char *s)
{
if (s == "")
return (1);
char *cp = s;
strrev(cp);
return (cp == s ? 1 : 0);
}
