#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * _strcpy - check the code
 *
 *@dest: passed parameter
 *@src: passed parameter
 *
 * Return: returns value
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; i != '\0'; i++)
{
dest[i] = src[i];
}

return dest;
}
