#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * _pow_recursion - check the code
 *
 *@x: passed parameter
 *@y: passed parameter
 *
 * Return: return value
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(y - 1));
}
}
