/**
 * _strcpy - Copy a string to another string variable
 * @dest: Variable to copy to
 * @src: String to copy
 * Return: *char
*/
char *_strcpy(char *dest, char *src)
{
int n = 0;
for (; src[n] != 0; n++)
{
*(dest + n) = src[n];
}
*(dest + n) = '\0';
return (dest);
}
