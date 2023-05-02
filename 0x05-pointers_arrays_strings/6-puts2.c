#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * puts2 - check the code
 *
 *@str: passed parameter
 *
 *
 */


void puts2(char *str)
{
int i = 0;

if (str != "")
{
printf("%c", str[i]);
while (i < ((_strlen(str)) - 2))
{
i = i + 2;
printf("%c", str[i]);
}

printf("\n");
}
else
{
printf("\n");
}
}
