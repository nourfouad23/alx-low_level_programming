#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * _strcat - check the code
 *
 *@dest: passed parameter
 *@src: passed parameter
 *
 * Return: returns value
 */

char *_strcat(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[(_stlen(src) + 1) + i] = src[i];
}

return (dest);
}
