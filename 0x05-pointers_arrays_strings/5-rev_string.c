#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
#include <stdlib.h>

/**
 * rev_string - check the code
 *
 *@s: passed parameter
 *
 *
 */


void rev_string(char *s)
{
int i, j;

char *temp = malloc(sizeof(*temp));


i = 0;
j = (_strlen(s) - 1);

temp[_strlen(s) - 1] = s[0];

while (i < (_strlen(s) - 2))
{
while (j > 0)
{
temp[i] = s[j];
j--;
i++;
}
}

for (i = 0; i < (_strlen(s)); i++)
{
s[i] = temp[i];
}
}
