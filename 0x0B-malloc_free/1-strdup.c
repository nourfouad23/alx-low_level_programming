#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy func
 *@str: passed param
 * Return: return value.
 */

char *_strdup(char *str)
{
char *newstr = (char *) malloc(strlen(str) * sizeof(char));

long unsigned int i;

if (str == NULL)
{
return (NULL);
}
else
{
for (i = 0; i <= strlen(str); i++)
{
newstr[i] = str[i];
}
return (newstr);
}
}
