#include <stdio.h>
#include "main.h"

/**
 * print_line - function to check, print and return
 *
 * @n: Number to pass
 */

void print_line(int n)
{
int num;

if (n <= 0)
{
printf("\n");
}
else
{
for (num = 1; num <= n; num++)
{
printf("_");
}
printf("\n");
}
}
