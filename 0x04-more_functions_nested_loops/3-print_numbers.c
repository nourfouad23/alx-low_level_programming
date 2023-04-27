#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function to check, print and return
 *
 */

void print_numbers(void)
{
int num;

for (num = 0; num < 10; num++)
{
_putchar('0' + num);
}
_putchar('\n');
}
