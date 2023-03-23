#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - Print all type of data
 * @format: The format
 * Return: void on Success
*/
void print_all(const char * const format, ...)
{
int i = 0;
char *str_var, *sep = "";
va_list opt_args;

va_start(opt_args, format);
if (format)
{
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(opt_args, int));
break;

case 'i':
printf("%s%d", sep, va_arg(opt_args, int));
break;

case 'f':
printf("%s%f", sep, va_arg(opt_args, double));
break;

case 's':
str_var = va_arg(opt_args, char *);
if (str_var == NULL)
str_var = "(nil)";
printf("%s%s", sep, str_var);
break;
}

sep = ", ";
i++;
}
}
va_end(opt_args);

printf("\n");
}
