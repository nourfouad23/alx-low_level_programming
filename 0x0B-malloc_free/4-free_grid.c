#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy func
 *@str: passed param
 * Return: return value.
 */

void free_grid(int **grid, int height)
{
if (!(height <= 0))
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
}
