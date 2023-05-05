#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i;

if (n >= 0)
{
for (i = n - 1; i >= 0; i--)
{
if (i != n - 1)
{
printf(", ");
}
printf("%d", a[i]);
}
printf("\n");
}
}
