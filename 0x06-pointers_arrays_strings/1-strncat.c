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
int j, z, stopper;

int length = strlen(dest) + n;
int maxLength = strlen(dest) + strlen(src);

char *temp = malloc(sizeof(*temp));

int i = 0;

if (length > maxLength)
{
stopper = maxLength;
}
else
{
stopper = length;
}

while (i < stopper)
{
for (j = 0; dest[j] != '\0'; j++)
{
temp[i] = dest[j];
i++;
}
for (z = 0; src[z] != '\0'; z++)
{
temp[i] = src[z];
i++;
}
}

for (i = 0; dest[i] != '\0'; i++)
{
dest[i] = '\0';
}

for (i = 0; i < stopper; i++)
{
dest[i] = temp[i];
}

return (dest);
}
