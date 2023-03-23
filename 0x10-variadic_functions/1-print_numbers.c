#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - Print all additional int arguments
 * @separator: The separator
 * @n: The total of additional arguments
 * Return: void on Success
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
const char *sep = separator == NULL ? "" : separator;
unsigned int i = n;
va_list opt_args;

va_start(opt_args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(opt_args, int));
if (i != (n - 1))
{
printf("%s", sep);
}
}
va_end(opt_args);
printf("\n");
}
