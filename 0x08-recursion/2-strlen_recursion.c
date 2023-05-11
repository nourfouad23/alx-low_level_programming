#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * _strlen_recursion - check the code
 *
 *@s: passed parameter
 *
 *
 */

int _strlen_recursion(char *s)
{
int count = 0;

if (*s)
{
count++;
return (count + _strlen_recursion(s + 1));
}
else
{
return (count);
}
}
