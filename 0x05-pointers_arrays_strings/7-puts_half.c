#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * puts_half - check the code
 *
 *@str: passed parameter
 *
 *
 */


void puts_half(char *str)
{
int i, strLength;

strLength = _strlen(str);

if (strLength % 2 == 0)
{
for (i = strLength / 2; i < strLength; i++)
{
printf("%c", str[i]);
}
}
else
{
for (i = (((strLength - 1) / 2) + 1); i < strLength; i++)
{
printf("%c", str[i]);
}
}
printf("\n");
}
