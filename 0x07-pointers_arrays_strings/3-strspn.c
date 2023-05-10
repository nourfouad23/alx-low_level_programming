#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strspn - check the code
 *
 *@s: passed parameter
 *@accept: passed parameter
 * Return: returns value
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;

int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] != accept[j])
{
j++;
}
else
{
count = count + 1;
j = 0;
i++;
}
}
}
return (count);
}
