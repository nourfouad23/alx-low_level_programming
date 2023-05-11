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
if (*s)
{
_print_rev_recursion(s + 1);
printf("%c", *s);
}
else
{
printf("%c", *s);
}
}
