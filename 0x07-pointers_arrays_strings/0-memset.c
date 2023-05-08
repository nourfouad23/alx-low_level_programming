#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _memsett - check the code
 *
 *@s: passed parameter
 *@b: passed parameter
 *@n: passed parameter
 * 
 * Return: returns value
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
