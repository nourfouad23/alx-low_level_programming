#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * rev_string - check the code
 *
 *@s: passed parameter
 *
 *
 */


void rev_string(char *s)
{
int i;
char temp;

for (i = (_strlen(s) - 1); i >= 0; i--)
{
temp = s[i];
}
printf("%c", temp);

*s = temp;
}
