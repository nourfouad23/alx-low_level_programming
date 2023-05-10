#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strchr - check the code
 *
 *@s: passed parameter
 *@c: passed parameter
 * Return: returns value
 */

char *_strchr(char *s, char c)
{
int i, j, z ,index;

char *temp = malloc(sizeof(*s));

printf("%ld", sizeof(*s));
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
index = i;
break;
}
else
{
printf("\n");
return (s);
}
}
j = index;
z = 0;

while (s[j] != '\0')
{
temp[z] = s[j];
j++;
z++;
}

s = temp;

return (s);
}
