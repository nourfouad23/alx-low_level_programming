#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _memset - check the code
 *
 *@s: passed parameter
 *@b: passed parameter
 *@n: passed parameter
 * Return: returns value
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
s[i] = b;
}
}

return (s);
}
