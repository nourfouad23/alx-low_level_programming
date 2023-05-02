#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * print_rev - check the code
 *
 *@s: passed parameter
 *
 *
 */


void print_rev(char *s)
{
int i;

for (i = (_strlen(s) - 1); i >= 0; i--)
printf("%c", s[i]);

printf("\n");
}
