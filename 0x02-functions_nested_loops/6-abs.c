#include <stdio.h>
#include "main.h"

/**
 * _abs - function to check, print and return
 *
 * @n: Number to pass to function
 *
 * Return: returns 1 or 0 or -1
 */

int _abs(int n)
{
if (n < 0)
{
return (n * (-1));
}
else
{
return (n);
}
}
