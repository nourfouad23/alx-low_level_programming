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

if (n <= 0)
{
startIndex = *(&a + 1) - a;
}
else
{
startIndex = n;
}

for (i = startIndex - 1; i >= 0; i--)
{
if (i != startIndex - 1)
{
printf(", ");
}
printf("%d", a[i]);
}
printf("\n");
}
