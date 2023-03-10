#include <string.h>

int handlePal(int start, int end, char *str)
{
if (str[start] != str[end])
return (0);
else if (str[start] == str[end])
{
start++;
end--;
return (handlePal(start, end, str));
}
else
return (1);
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string
 * Return: int
*/
int is_palindrome(char *s)
{
return (handlePal(0, strlen(s) - 1, s));
}
