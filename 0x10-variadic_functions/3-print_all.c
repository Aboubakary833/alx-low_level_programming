#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - Print all type of data
 * @format: The format
*/
void print_all(const char * const format, ...)
{
int i = 0, len = strlen(format);
char *str_var;
va_list opt_args;

va_start(opt_args, format);
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
    printf("%c", va_arg(opt_args, int));
    
    break;

case 'i':
    printf("%d", va_arg(opt_args, int));
    break;

case 'f':
    printf("%f", va_arg(opt_args, double));
    break;

case 's':
    str_var = va_arg(opt_args, char *);
    if (str_var == NULL)
    str_var = "(nil)";
    printf("%s", str_var);
    break;
}

if (i != len - 1)
printf(", ");
i++;
}
va_end(opt_args);

printf("\n");
}
