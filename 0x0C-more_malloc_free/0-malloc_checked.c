#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code
 *@b: passed param
 * Return: nothing.
 */

void *malloc_checked(unsigned int b)
{
if (b != 0)
{
return (malloc(sizeof(b)));
}
else
{
long x = 98;

long *y;

y = &x;

return ((void *)*y);
}
}
