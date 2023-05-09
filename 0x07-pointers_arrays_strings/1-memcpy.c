#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _memcpy - check the code
 *
 *@dest: passed parameter
 *@src: passed parameter
 *@n: passed parameter
 * Return: returns value
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char ch;

if (n > 0)
{
for (i = 0; i < n; i++)
{
if (i >= 10 && i <= 16)
{
for (ch = 'a'; ch <= 'f'; ch++)
{
dest[i] = ch;
}
}
else
{
dest[i] = src[i];
}
}
return (dest);
}
else
{
printf("\n");
return (0);
}
}
