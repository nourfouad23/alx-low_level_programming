#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check the code
 *@n: passed param
 *
 * Return: return int
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list sum_input;

va_start(sum_input, n);
if (n == 0)
return (0);

for (i = 0; i < n; i++)
{
sum += va_arg(sum_input, int);
}

va_end(sum_input);

return (sum);
}
