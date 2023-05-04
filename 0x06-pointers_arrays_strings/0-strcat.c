#include "main.h"
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
int j, z;

int length = strlen(dest) + strlen(src);

char *temp = malloc(sizeof(*temp));

int i = 0;

while (i < length)
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

for (i = 0; i < length; i++)
{
dest[i] = temp[i];
}

return (dest);
}
