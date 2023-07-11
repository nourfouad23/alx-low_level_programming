#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array
 * @size: passed param
 * @c: passed param
 *
 * Return: returns value
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

arr = malloc(size * (sizeof(char)));

if (!arr)
{
return (NULL);
}
else
{
if (size == 0)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
}
}

