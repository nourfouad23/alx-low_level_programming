#include <stdio.h>
#include "main.h"

/**
 * _isalpha - returns true if int is alphabet else returns false
 *
 * @c: Number to pass to _isalpha function
 *
 * Return: returns 1 if alpha else returns 0
 */


int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
