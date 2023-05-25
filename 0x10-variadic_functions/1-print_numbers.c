#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Variadic function that prints
 * @separator: What should separate functions
 * @n: Number of arguments being passed in
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list inputNum;

va_start(inputNum, n);

for (i = 0; i < n; i++)
{
num = va_arg(inputNum, int);
printf("%d", num);

if ((i != n - 1) && separator != NULL)
printf("%s", separator);
}

va_end(inputNum);
printf("\n");
}
