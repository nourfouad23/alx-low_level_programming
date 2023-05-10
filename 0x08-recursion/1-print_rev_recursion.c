#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * _print_rev_recursion - check the code
 *
 *@s: passed parameter
 *
 *
 */

void _print_rev_recursion(char *s)
{
int i;

i = strlen(s);

while (i > 0)
{
printf("%c", s[i]);
i--;
}
printf("\n");
}
