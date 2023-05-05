#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
 * _strcmp - compares 2 strings
 *
 * @s1: parameter to pass to function
 * @s2: parameter to pass to function
 *
 * Return: returns result
 */



int _strcmp(char *s1, char *s2)
{
int i, result;

int length = strlen(s1) + strlen(s2);

for (i = 0; i < length; i++)
{
if (s1[i] == s2[i])

result = 0;

else 
{
result = s1[i] - s2[i];
break;
}
}
return result;
}
