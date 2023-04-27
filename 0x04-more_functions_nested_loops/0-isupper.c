#include <stdio.h>
#include "main.h"

/**
 * _isupper - returns true if char is uppercase else returns false
 *
 * @c: Number to pass to _isupper function
 *
 * Return: returns 1 if lower else returns 0
 */


int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
