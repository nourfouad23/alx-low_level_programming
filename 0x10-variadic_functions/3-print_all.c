#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Variadic function that can print any argument passed in
 * as long as it is a character, integer, float, or string
 * @format: The data type being passed into the function
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
int i = 0;
va_list arg_input;
char *str = "(nil)";
char *sarray = NULL;
char *separator = ", ";

va_start(arg_input, format);

while (format[i] != '\0' && format != NULL)
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(arg_input, int));
break;
case 'i':
printf("%d", va_arg(arg_input, int));
break;
case 'f':
printf("%f", va_arg(arg_input, double));
break;
case 's':
sarray = va_arg(arg_input, char *);
if (sarray == NULL)
sarray = str;
printf("%s", sarray);
break;
default:
i++;
continue;
}
if ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
printf("%s", separator);

i++;
}
printf("\n");
va_end(arg_input);
}