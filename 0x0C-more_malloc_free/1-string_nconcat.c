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
unsigned int i, j, z;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;

if (n >= sizeof(s2))
{
newstr = (char *) malloc(((strlen(s1) + strlen(s2) + 1) * sizeof(char)));
}
else if (n < sizeof(s2))
{
newstr = (char *) malloc((((strlen(s1) + n + 1)* sizeof(char))));
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
