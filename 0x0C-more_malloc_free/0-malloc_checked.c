#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *malloc_checked - check the code
 *@b: passed param
 *Return: pointer.
 */

void *malloc_checked(unsigned int b)
{
int *newptr;

newptr = malloc(b);


if (newptr == NULL)
{
exit(98);
}

return (newptr);
}
