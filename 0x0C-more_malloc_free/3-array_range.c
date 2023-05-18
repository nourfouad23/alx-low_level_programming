#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create array
 * @min: passed param
 * @max: passed param
 *
 * Return: returns value
 */

int *array_range(int min, int max)
{
int *arr;
int i, j;

arr = malloc((max - min + 1) * (sizeof(int)));

if (!arr)
{
return (NULL);
}
else
{
if (min > max)
{
return (NULL);
}
else
{
j = 0;

for (i = min; i <= max; i++)
{
arr[j] = i;
j++;
}
return ((int *)arr);
}
}
}
