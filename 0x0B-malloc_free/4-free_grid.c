#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - free func
 *@grid: passed param
 *height: passed param
 * Return: return nothing.
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
