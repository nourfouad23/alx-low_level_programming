#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - returns true if char is lowercase else returns false
 *
 * @c: Number to pass to _islower function
 *
 * Return: returns 1 if lower else returns 0
 */


int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
