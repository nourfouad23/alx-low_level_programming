#include "main.h"
#include <stdio.h>

/**
 * prints_array - check the code
 *
 *@a: passed parameter
 *@n: passed parameter
 *
 */


void print_array(int *a, int n)
{
int i;

for (i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[n - 1]);
}
