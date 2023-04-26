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

for (i = n; i <= 98; i ++)
{
if (i != 98)
{
_putchar('0' + i);
_putchar(',');
_putchar(' ');
}
else
{
_putchar('0' + i);
}
}
_putchar('\n');
}
