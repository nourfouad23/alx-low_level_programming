#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - 2 dimen arr func
 *@width: passed param
 *@height: passed param
 * Return: return value.
 */

int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
{
return (NULL);
}
else
{
int **array;

int i;

array = malloc((width * sizeof(int *)) + 1);

if (!array)
{
return (NULL);
}
else
{
for (i = 0; i < width; i++)
{
array[i] = malloc((height * sizeof(int)) + 1);
}
return (array);
}
}
}
