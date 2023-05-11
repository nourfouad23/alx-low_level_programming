#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * _sqrt_recursion - check the code
 *
 *@n: passed parameter
 *
 * Return: return value
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
else if (n == 1)
{
return (1);
}
return (n * _sqrt_recursion(n / 2));
}
