#include <stdio.h>
#include "main.h"

/**
 * _isdigit - returns true if char is digit else returns false
 *
 * @c: Number to pass to _isdigit function
 *
 * Return: returns 1 if digit else returns 0
 */


int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
