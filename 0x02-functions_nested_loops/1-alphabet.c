#include <stdio.h>
#include "main.h"

/**
 * print_alphabet
 *
 * prints from a to z lowercase (Success)
 */

void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
