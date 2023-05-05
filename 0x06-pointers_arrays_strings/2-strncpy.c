#include "main.h"
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strncpy - check the code
 *
 *@dest: passed parameter
 *@src: passed parameter
 *@n: passed parameter
 * 
 * Return: returns value
 */

char *_strncpy(char *dest, char *src, int n)
{
int i, z;

char *temp = malloc(sizeof(*temp));

for (z = 0; z < n; z++)
{
temp[z] = src[z];
}


for (i = 0; i < n; i++)
{
dest[i] = temp[i];
}

return (dest);
}
