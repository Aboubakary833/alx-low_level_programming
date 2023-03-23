#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - Print all additional string arguments
 * @separator: The separator
 * @n: The total of additional arguments
 * Return: void on Success
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
const char *sep = separator == NULL ? "" : separator;
char *cur_str, *arg;
unsigned int i = n;
va_list opt_args;

va_start(opt_args, n);
for (i = 0; i < n; i++)
{
arg = va_arg(opt_args, char *);
cur_str = arg ? arg : "(nil)";
printf("%s", cur_str);
if (i != (n - 1))
{
printf("%s", sep);
}
}
va_end(opt_args);
printf("\n");
}
