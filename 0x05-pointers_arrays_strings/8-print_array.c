#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code
 *
 *@a: passed parameter
 *@n: passed parameter
 *
 */


void print_array(int *a, int n)
{
int i;

if (n > 1)
{
for (i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[n - 1]);
}
else
{
printf("\n");
}
}
