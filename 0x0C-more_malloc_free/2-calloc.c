#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - create array
 * @size: passed param
 * @nmemb: passed param
 * Return: returns value
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i;

arr = malloc(nmemb * size);

if (!arr)
{
return (NULL);
}
else
{
if (size == 0 || nmemb == 0)
{
return (NULL);
}
else
{
for (i = 0; i < (size * nmemb); i++)
{
arr[i] = 0;
}
return ((void *)arr);
}
}
}
