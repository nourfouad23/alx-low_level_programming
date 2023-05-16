#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - copy func
 *@s1: passed param
 *@s2: passed param
 * Return: return value.
 */

char *str_concat(char *s1, char *s2)
{
if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
else if (s1 == NULL && s2 != NULL)
{
return (s2);
}
else if (s2 == NULL && s1 != NULL)
{
return (s1);
}
else
{
char *newstr;

unsigned int i, j, z;

newstr = (char *) malloc(((strlen(s1) + strlen(s2)) * sizeof(char)) + 1);

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

for (j = 0; j < strlen(s2); j++)
{
newstr[z] = s2[j];
z++;
}
return (newstr);
}
}
}
