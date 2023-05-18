#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - copy func
 *@s1: passed param
 *@s2: passed param
 *@n: passed param
 * Return: return value.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *newstr;
unsigned i, j ,z;

if (n >= sizeof(s2))
{
newstr = (char *) malloc(((strlen(s1) + strlen(s2)) * sizeof(char)) + 1);
}
else if (n < sizeof(s2))
{
newstr = (char *) malloc(((strlen(s1) + n * sizeof(char)) + 1));
}
else
{
newstr = (char *) malloc(sizeof(char));
}
if (!newstr)
{
return (NULL);
}
else
{
for (i = 0; i < strlen(s1); i++)
{
newstr[i] = s1[i];
}
z = strlen(s1);

for (j = 0; j < n; j++)
{
newstr[z] = s2[j];
z++;
}
return (newstr);
}
}
