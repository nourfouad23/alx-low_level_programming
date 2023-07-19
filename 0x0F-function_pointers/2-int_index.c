#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search an integer
 *@array: the integer to print
 *@size: passed parameter
 *@cmp: passed function
 *
 * Return: number.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int (*ptr)(int);

if (size <= 0 || array == NULL || cmp == NULL)
return (-1);

ptr = cmp;

for (i = 0; i < size; i++)
{
if (ptr(array[i]))
return (i);
}

return (-1);
}
