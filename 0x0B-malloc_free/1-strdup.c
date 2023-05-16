#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strdup - copy func
 *@str: passed param
 * Return: return value.
 */

char *_strdup(char *str)
{
char *newstr = malloc(sizeof(*str));

int i;

if(str == NULL)
{
return (NULL);
}
else
{
for (i = 0; str[i] != '\0'; i++)
{
newstr[i] = str[i];
}
return (newstr);
}
}
