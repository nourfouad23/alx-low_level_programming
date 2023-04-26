#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function to check, print and return
 *
 * @n: Number to pass to function
 *
 */


void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d", i);
}
}
_putchar('\n');
}
else
{
for (i = n; i >= 98; i--)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d", i);
}
}
_putchar('\n');
}
}
