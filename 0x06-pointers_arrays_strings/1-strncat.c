#include "main.h"
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strncat - check the code
 *
 *@dest: passed parameter
 *@src: passed parameter
 *@n: passed parameter
 * 
 * Return: returns value
 */

char *_strncat(char *dest, char *src, int n)
{
int j, z;

int length = strlen(dest) + n;

char *temp = malloc(sizeof(*temp));

int i = 0;

while (i < length)
{
for (j = 0; dest[j] != '\0'; j++)
{
temp[i] = dest[j];
i++;
}
for (z = 0; z < n; z++)
{
temp[i] = src[z];
i++;
}
}

for (i = 0; dest[i] != '\0'; i++)
{
dest[i] = '\0';
}

for (i = 0; i < length; i++)
{
dest[i] = temp[i];
}

return (dest);
}
