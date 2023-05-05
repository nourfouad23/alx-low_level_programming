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
int i, startIndex;

if (n < 0)
{
startIndex = sizeof(a) - 1;
}
else
{
startIndex = n - 1;
}

for (i = startIndex; i >= 0; i--)
{
if (i != startIndex)
{
printf(", ");
}
printf("%d", a[i]);
}
printf("\n");
}
