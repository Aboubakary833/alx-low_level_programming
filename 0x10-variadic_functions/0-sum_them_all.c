#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of all arguments
 * @n: The size of arguments
 * Return: int on Success
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = n;
va_list opt_args;
int sum = 0;

if (n == 0)
return (0);

va_start(opt_args, n);
for (i = 0; i < n; i++)
{
sum += (int) va_arg(opt_args, int);
}
va_end(opt_args);

return (sum);
}
