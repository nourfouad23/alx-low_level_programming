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
else
{
char *newstr = (char *) malloc((strlen(s1) + strlen(s2)) * sizeof(char));

unsigned int i, j, z;

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
